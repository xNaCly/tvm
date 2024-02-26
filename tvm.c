#include <stdlib.h>

#include "src/bytecode.h"
#include "src/log.h"

int main() {
  tvm_info("Starting tvm...");
  uint8_t instructions[] = {
      LOAD,
      0,
      END,
      0,
  };
  tvm_info("Disassembling instructions...");
  tvm_print_bytecode(instructions);
  return EXIT_SUCCESS;
}
