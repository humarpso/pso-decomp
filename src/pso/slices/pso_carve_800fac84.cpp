#include "types.h"

extern "C" {

s32 fn_800FAC84(void* p);

s32 fn_800FAC84(void* p) { return *(s32*)((char*)*(void**)((char*)p + 0x174) + 0x40); }
int fn_800FAC90(void) { return 0; }

}
