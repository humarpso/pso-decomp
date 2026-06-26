#include "types.h"

extern "C" {

int fn_80244A14(void*);
void fn_8034B6E0(void* p);

void fn_8034B6E0(void* p) { if (*(unsigned int*)((char*)p + 0x2c) != 0) { fn_80244A14(*(void**)((char*)p + 0x2c)); *(int*)((char*)p + 0x2c) = 0; } }

}
