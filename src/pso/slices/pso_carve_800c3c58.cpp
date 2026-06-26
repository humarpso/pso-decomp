#include "types.h"

extern "C" {

int fn_800BB7D4(void*, void*);
void fn_800C3C58(void* p);

void fn_800C3C58(void* p) { if (*(int*)((char*)p + 0x3d4) == 0) { fn_800BB7D4(p, (void*)242); *(int*)((char*)p + 0x3d4) = 20; } }

}
