#include <stdint.h>

#include "src/bytecode.h"
#include "src/common.h"
#include "src/vm.h"

int main() {
  TVM_INFO("Starting tvm...");

  // 1+3
  uint8_t instructions[] = {
      LOAD, 0, LOAD, 1, END, 0,
  };
  TVM_INFO("Disassembling instructions...");
  tvm_print_bytecode(instructions);
  tvm_vm vm = tvm_vm_new(instructions);
  tvm_vm_result r = tvm_vm_interpret(&vm);
  return r;
}
