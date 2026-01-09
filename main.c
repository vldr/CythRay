#define _CRT_SECURE_NO_WARNINGS

#include "cythray.h"
#include <math.h>

#ifdef _WIN32
#include <malloc.h>
#else
#include <alloca.h>
#endif

static void error_callback(int start_line, int start_column, int end_line,
                           int end_column, const char *message) {
  int offset = 0;
  char *prefix = (char *)PREFIX;

  while (*prefix) {
    if (*prefix == '\n')
      offset++;

    prefix++;
  }

  fprintf(stderr, "%d:%d-%d:%d: error: %s\n", start_line - offset, start_column,
          end_line - offset, end_column, message);
}

static void panic_callback(const char *function, int line, int column) {
  int offset = 0;
  char *prefix = (char *)PREFIX;

  while (*prefix) {
    if (*prefix == '\n')
      offset++;

    prefix++;
  }

  if (line && column)
    fprintf(stderr, "  at %s:%d:%d\n", function, line - offset, column);
  else
    fprintf(stderr, "%s\n", function);
}

static void print(String *string) {
  fwrite(string->data, 1, string->size, stdout);
}

static void println(String *string) {
  print(string);
  fwrite("\n", 1, 1, stdout);
}

int main(int argc, char **argv) {
  if (argc < 2) {
    printf("error: provide a source file to run\n");
    return -1;
  }

  char *text = LoadFileText(argv[1]);
  if (!text) {
    printf("error: failed to load text file\n");
    return -1;
  }

  char *source = (char *)alloca(strlen(text) + strlen(PREFIX) + 1);
  memcpy(source, PREFIX, strlen(PREFIX));
  memcpy(source + strlen(PREFIX), text, strlen(text));
  source[strlen(PREFIX) + strlen(text)] = '\0';

  Jit *jit = jit_init(source, error_callback, panic_callback);
  if (!jit)
    return -1;

  SetConfigFlags(FLAG_VSYNC_HINT);
  SetConfigFlags(FLAG_MSAA_4X_HINT);

  jit_set_raylib_functions(jit);
  jit_set_function(jit, "env.cos", (uintptr_t)cosf);
  jit_set_function(jit, "env.sin", (uintptr_t)sinf);
  jit_set_function(jit, "env.tan", (uintptr_t)tanf);
  jit_set_function(jit, "env.pow", (uintptr_t)powf);
  jit_set_function(jit, "env.print", (uintptr_t)print);
  jit_set_function(jit, "env.println", (uintptr_t)println);
  jit_generate(jit, false);
  jit_run(jit);
  jit_destroy(jit);

  UnloadFileText(text);
}