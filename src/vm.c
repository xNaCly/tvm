#include <stdio.h>
#include <stdlib.h>

#include "bytecode.h"
#include "common.h"
#include "vm.h"

tvm_vm tvm_vm_new(uint8_t *instructions) {
  tvm_vm vm = {.instructions = instructions, .ip = 0};
  return vm;
}

tvm_value *tvm_value_new(tvm_value_store value_store, tvm_value_type type) {
  tvm_value *v = NULL;
  if (v = (tvm_value *)malloc(sizeof(tvm_value)), v == NULL) {
    TVM_ERROR("Failed to allocate enough space for tvm_value");
    return NULL;
  }
  return v;
}

tvm_vm_result tvm_vm_interpret(tvm_vm *vm) {
  for (;; vm->ip += 2) {
    switch (vm->instructions[vm->ip]) {
    case LOAD:
      TVM_ERROR("Instruction LOAD not implemented");
      goto error;
    case END:
      TVM_INFO("Successfully ended execution");
      break;
    }
  }

  return INTERPRET_OK;
error:
  return INTERPRET_RUNTIME_ERROR;
}
