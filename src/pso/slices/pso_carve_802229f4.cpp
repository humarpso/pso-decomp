#include "types.h"

extern "C" {

int fn_80244A14(void*);
void fn_802229F4(void* p);

void fn_802229F4(void* p) { if (*(unsigned int*)((char*)p + 0x20c) != 0) { fn_80244A14(*(void**)((char*)p + 0x20c)); *(int*)((char*)p + 0x20c) = 0; } }

}
