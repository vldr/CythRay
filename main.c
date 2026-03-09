#define _CRT_SECURE_NO_WARNINGS

#include "cythray.h"
#include <math.h>

#ifdef _WIN32
#include <malloc.h>
#else
#include <alloca.h>
#endif

static void print(CyString *string) {
  fwrite(string->data, 1, string->size, stdout);
}

static void println(CyString*string) {
  print(string);
  fwrite("\n", 1, 1, stdout);
}

int main(int argc, char **argv) {
  if (argc < 2) {
    printf("error: provide a source file to run\n");
    return -1;
  }

  SetConfigFlags(FLAG_VSYNC_HINT);
  SetConfigFlags(FLAG_MSAA_4X_HINT);

  CyVM* vm = cyth_init();
  if (!cyth_load_file(vm, argv[1])) {
    printf("error: failed to load text file\n");
    return -1;
  }

  cyth_load_raylib_functions(vm);
  cyth_load_function(vm, "float cos(float a)", (uintptr_t)cosf);
  cyth_load_function(vm, "float sin(float a)", (uintptr_t)sinf);
  cyth_load_function(vm, "float tan(float a)", (uintptr_t)tanf);
  cyth_load_function(vm, "float exp(float a)", (uintptr_t)expf);
  cyth_load_function(vm, "float abs(float a)", (uintptr_t)fabsf);
  cyth_load_function(vm, "float pow(float a, float b)", (uintptr_t)powf);
  cyth_load_function(vm, "void print(string a)", (uintptr_t)print);
  cyth_load_function(vm, "void println(string a)", (uintptr_t)println);
  cyth_compile(vm);
  cyth_run(vm);
  cyth_destroy(vm);

  return 0;
}