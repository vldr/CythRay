#define _CRT_SECURE_NO_WARNINGS

#include "cythray.h"

#include <math.h>
#include <malloc.h>

typedef void (*error_callback_t)(int start_line, int start_column, int end_line, int end_column, const char *message);
extern "C"
{
  Jit* jit(const char* source);
  void set_error_callback(error_callback_t callback); 
}

static void handle_error(int start_line, int start_column, int end_line, int end_column, const char *message)
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

  set_error_callback(handle_error);

  Jit *ctx = jit(source);
  if (!ctx)
  {
    printf("error: failed to initialize jit\n");
    return -1;
  }

  SetConfigFlags(FLAG_VSYNC_HINT);
  SetConfigFlags(FLAG_MSAA_4X_HINT);

  jit_set_raylib_functions(ctx);
  jit_set_function_typed(ctx, "env.cos", +[](float a) { return cosf(a); });
  jit_set_function_typed(ctx, "env.sin", +[](float a) { return sinf(a); });
  jit_set_function_typed(ctx, "env.tan", +[](float a) { return tanf(a); });
  jit_set_function_typed(ctx, "env.pow", +[](float a, float b) { return powf(a, b); });
  jit_set_function_typed(ctx, "env.print", +[](String *t) { printf("%s\n", t->data); });
  jit_generate(ctx, false);
  jit_run(ctx);
  jit_destroy(ctx);

  UnloadFileText(text);
}