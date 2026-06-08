#ifndef _STDLIB_H_
#define _STDLIB_H_

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define RAND_MAX 32767

void srand(unsigned int seed);
int rand(void);
void exit(int status);

#ifdef __cplusplus
}
#endif

#endif
