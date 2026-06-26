#include "types.h"

extern "C" {

void fn_800822D0(void);
void fn_800822D4(void* p, f32 a, f32 b);
f32 fn_800822E0(void* p);
s32 fn_80082300(void* p);

void fn_800822D0(void) {  }
void fn_800822D4(void* p, f32 a, f32 b) { *(f32*)((char*)p + 0x40) = a; *(f32*)((char*)p + 0x44) = b; }
f32 fn_800822E0(void* p) { return *(f32*)((char*)p + 0xc0); }
int fn_800822E8(void) { return 0; }
s32 fn_80082300(void* p) { return *(s32*)((char*)p + 0xc); }

}
