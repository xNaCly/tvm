#ifndef LOG_H
#define LOG_H

#include "bytecode.h"
#include <stdio.h>

void tvm_info(const char *t);
void tvm_print_bytecode(tvm_bytecode *bc);
#endif
