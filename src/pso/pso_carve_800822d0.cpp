#include "types.h"

extern "C" {

f32 fn_800822E0(void* p);
s32 fn_80082300(void* p);

int fn_800822D0(void) { return 0; }
int fn_800822D4(void) { return 0; }
f32 fn_800822E0(void* p) { return *(f32*)((char*)p + 0xc0); }
int fn_800822E8(void) { return 0; }
s32 fn_80082300(void* p) { return *(s32*)((char*)p + 0xc); }

}
