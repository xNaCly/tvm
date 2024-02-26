#ifndef VM_H
#define VM_H

#include <stdint.h>

typedef enum tvm_value_type {
  TYPE_BYTE,
  TYPE_INT_64,
  TYPE_FLOAT_64,
} tvm_value_type;

// TODO: support for strings
typedef union tvm_value_store {
  char byte;
  long int64;
  double float64;
} tvm_value_store;

typedef struct tvm_value {
  tvm_value_type type;
  tvm_value_store store;
} tvm_value;

typedef struct tvm_constant_pool {
  int count;
  tvm_value *values;
} tvm_constant_pool;

typedef struct tvm_vm {
  tvm_constant_pool constant_pool;
  uint8_t *instructions;
  uint8_t ip;
} tvm_vm;

typedef enum tvm_vm_result {
  INTERPRET_OK,
  INTERPRET_COMPILE_ERROR,
  INTERPRET_RUNTIME_ERROR
} tvm_vm_result;

tvm_vm tvm_vm_new(uint8_t *instructions);
tvm_vm_result tvm_vm_interpret(tvm_vm *vm);

#endif
