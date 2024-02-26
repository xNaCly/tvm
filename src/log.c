#include "bytecode.h"
#include "common.h"
#include <stdint.h>
#include <stdio.h>

void tvm_info(const char *t) { printf("INFO: %s\n", t); }

static const char *OPCODE_TO_STRING[] = {
    [LOAD] = "LOAD",
    [END] = "END",
};

void tvm_print_bytecode(uint8_t instructions[]) {
  for (int i = 0;; i += 2) {
    uint8_t op = instructions[i];
    uint8_t arg = instructions[i + 1];
    printf("%04d %-10s %d\n", i, OPCODE_TO_STRING[op], arg);
    if (op == END) {
      break;
    }
  }
}
