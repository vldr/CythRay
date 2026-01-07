#define _CRT_SECURE_NO_WARNINGS

#include "cythray.h"
#include <math.h>

#ifdef _WIN32
#include <malloc.h>
#endif

static void error_callback(int start_line, int start_column, int end_line, int end_column, const char *message)
{
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

int main(int argc, char **argv)
{
  if (argc < 2)
  {
    printf("error: provide a source file to run\n");
    return -1;
  }

  char *text = LoadFileText(argv[1]);
  if (!text)
  {
    printf("error: failed to load text file\n");
    return -1;
  }

  char *source = (char *)alloca(strlen(text) + strlen(PREFIX) + 1);
  memcpy(source, PREFIX, strlen(PREFIX));
  memcpy(source + strlen(PREFIX), text, strlen(text));
  source[strlen(PREFIX) + strlen(text)] = '\0';

  Jit* jit = jit_init(source, error_callback, nullptr);
  if (!jit)
  {
    printf("error: failed to initialize jit\n");
    return -1;
  }

  SetConfigFlags(FLAG_VSYNC_HINT);
  SetConfigFlags(FLAG_MSAA_4X_HINT);

  jit_set_raylib_functions(jit);
  jit_set_function_typed(jit, "env.cos", +[](float a) { return cosf(a); });
  jit_set_function_typed(jit, "env.sin", +[](float a) { return sinf(a); });
  jit_set_function_typed(jit, "env.tan", +[](float a) { return tanf(a); });
  jit_set_function_typed(jit, "env.pow", +[](float a, float b) { return powf(a, b); });
  jit_set_function_typed(jit, "env.print", +[](String* t) { printf("%s\n", t->data); });
  jit_generate(jit, false);
  jit_run(jit);
  jit_destroy(jit);

  UnloadFileText(text);
}