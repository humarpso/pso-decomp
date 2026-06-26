#include "types.h"

extern "C" {

int fn_80052EA0(void*);
void TWindowSubTradeMain__sub_802448E4(void* p);
void fn_802448C0(void* p);

int fn_80244888(void) { return 0; }
void fn_802448C0(void* p) { *(f32*)((char*)p + 0x40) = *(f32*)((char*)p + 0x30); *(f32*)((char*)p + 0x44) = *(f32*)((char*)p + 0x34); *(f32*)((char*)p + 0x48) = *(f32*)((char*)p + 0x38); *(f32*)((char*)p + 0x4c) = *(f32*)((char*)p + 0x3c); }
void TWindowSubTradeMain__sub_802448E4(void* p) { fn_80052EA0((char*)p + 0x30); *(int*)((char*)p + 0x50) = 3; }
int fn_8024491C(void) { return 0; }
int fn_80244958(void) { return 0; }
int fn_80244994(void) { return 0; }
int fn_802449E0(void) { return 0; }
int fn_80244A14(void) { return 0; }
int fn_80244A4C(void) { return 0; }

}
