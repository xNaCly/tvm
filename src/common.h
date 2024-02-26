#ifndef COMMON_H
#define COMMON_H

#include <stdint.h>
#include <stdio.h>

#define TVM_INFO(a) fputs("INFO: " a "\n", stderr)
#define TVM_ERROR(a) (fputs("ERROR: " a "\n", stderr), exit(EXIT_FAILURE))

#endif
