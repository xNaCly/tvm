#include <stdlib.h>

#include "src/bytecode.h"
#include "src/log.h"

int main() {
  tvm_info("Starting tvm...");
  tvm_bytecode instructions[] = {
      {.op = LOAD, .arg = 0},
      {.op = LOAD, .arg = 1},
      {.op = LOAD, .arg = 2},
  };
  for (size_t i = 0; i < sizeof(instructions) / sizeof(tvm_bytecode); i++) {
    tvm_print_bytecode(&instructions[i]);
  }
  return EXIT_SUCCESS;
}
