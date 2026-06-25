#include "types.h"

extern "C" {

int fn_800F06B4(void*, void*);
int fn_800F5E90(void* p);
int fn_80132A10(void*);

int fn_800F5E90(void* p) { return fn_80132A10(*(void**)((char*)p + 0x370)); }
void fn_800F5EB4(void* p, void* a1) { fn_800F06B4(a1, *(void**)((char*)p + 0x370)); }

}
