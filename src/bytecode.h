#ifndef BYTECODE_H
#define BYTECODE_H

// bytecode consists of two bytes indicating

typedef enum tvm_op_code {
  LOAD, // load constant from constant pool, push on stack
  END   // stops the execution
} tvm_op_code;

#endif
