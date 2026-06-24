#include "types.h"

extern "C" {

f32 fn_80143928(void* p);
s32 fn_80143930(void* p);
s32 fn_80143938(void* p);
void fn_80143940(void* p);

f32 fn_80143928(void* p) { return *(f32*)((char*)p + 0xc); }
s32 fn_80143930(void* p) { return *(s32*)((char*)p + 0x8); }
s32 fn_80143938(void* p) { return *(s32*)((char*)p + 0x0); }
void fn_80143940(void* p) { *(s32*)((char*)p + 0x18) = 1; }
int fn_8014394C(void) { return 0; }
int fn_80143960(void) { return 0; }
int fn_80143978(void) { return 0; }

}
