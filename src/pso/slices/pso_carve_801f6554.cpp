#include "types.h"

extern "C" {

int fn_80244A14(void*);
void fn_801F6554(void* p);

void fn_801F6554(void* p) { if (*(unsigned int*)((char*)p + 0x34) != 0) { fn_80244A14(*(void**)((char*)p + 0x34)); *(int*)((char*)p + 0x34) = 0; } }

}
