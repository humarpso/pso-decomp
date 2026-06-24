#include "types.h"

extern "C" {

f32 fn_8023F7C4(void* p);
s32 fn_8023F7CC(void* p);
void fn_8023F7D4(void* p, s32 v);

f32 fn_8023F7C4(void* p) { return *(f32*)((char*)p + 0x2a4); }
s32 fn_8023F7CC(void* p) { return *(s32*)((char*)p + 0x280); }
void fn_8023F7D4(void* p, s32 v) { *(s32*)((char*)p + 0x280) = v; }
int fn_8023F7DC(void) { return 0; }

}
