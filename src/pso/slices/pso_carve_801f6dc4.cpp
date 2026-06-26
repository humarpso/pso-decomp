#include "types.h"

extern "C" {

int fn_802229F4(void*);
void fn_801F6DC4(void* p);

void fn_801F6DC4(void* p) { if (*(unsigned int*)((char*)p + 0x294) != 0) { fn_802229F4((char*)p + 0x1c); *(int*)((char*)p + 0x294) = 0; } }

}
