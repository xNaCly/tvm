#ifndef BYTECODE_H
#define BYTECODE_H

typedef unsigned char op_code;
typedef unsigned char arg_code;

typedef struct tvm_bytecode {
  op_code op;
  arg_code arg;
} tvm_bytecode;

typedef enum tvm_op_code {
  LOAD, // load constant from constant pool, push on stack
} tvm_op_code;

#endif
