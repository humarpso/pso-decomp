#include "types.h"

extern "C" {

int fn_80244A14(void*);
void fn_80072C38(void* p);

void fn_80072C38(void* p) { if (*(unsigned int*)((char*)p + 0x2c) != 0) { fn_80244A14(*(void**)((char*)p + 0x2c)); *(int*)((char*)p + 0x2c) = 0; } }

}
