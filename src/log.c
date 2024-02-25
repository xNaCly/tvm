#include "bytecode.h"
#include <stdio.h>

void tvm_info(const char *t) { printf("INFO: %s\n", t); }

static const char *OPCODE_TO_STRING[] = {
    [LOAD] = "LOAD",
};

void tvm_print_bytecode(tvm_bytecode *bc) {
  printf("| op='%s' | arg='%d' |\n", OPCODE_TO_STRING[bc->op], bc->arg);
}
