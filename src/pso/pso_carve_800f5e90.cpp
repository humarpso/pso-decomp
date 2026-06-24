#include "types.h"

extern "C" {

int fn_800F5E90(void* p);
int fn_80132A10(void*);

int fn_800F5E90(void* p) { return fn_80132A10(*(void**)((char*)p + 0x370)); }
int fn_800F5EB4(void) { return 0; }

}
