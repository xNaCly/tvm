#ifndef BYTECODE_H
#define BYTECODE_H

#include "common.h"

typedef enum tvm_op_code {
  LOAD, // load constant from constant pool, push on stack
  END   // stops the execution
} tvm_op_code;

void tvm_print_bytecode(uint8_t instructions[]);

#endif
