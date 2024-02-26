#ifndef LOG_H
#define LOG_H

#include "common.h"
#include <stdio.h>

void tvm_info(const char *t);
void tvm_print_bytecode(uint8_t instructions[]);
#endif
