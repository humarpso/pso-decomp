#include "types.h"

extern "C" {

void fn_802FBBA0(void* p);
void fn_802FBBB4(void* p);
void fn_802FBBE8(void* p);

void fn_802FBBA0(void* p) { *(f32*)((char*)p + 0x688) = *(f32*)((char*)p + 0x394); *(f32*)((char*)p + 0x68c) = *(f32*)((char*)p + 0x39c); }
void fn_802FBBB4(void* p) { *(f32*)((char*)p + 0x38) = *(f32*)((char*)p + 0x690); *(f32*)((char*)p + 0x40) = *(f32*)((char*)p + 0x694); }
int fn_802FBBC8(void) { return 0; }
void fn_802FBBE8(void* p) { *(f32*)((char*)p + 0x394) = *(f32*)((char*)p + 0x690); *(f32*)((char*)p + 0x39c) = *(f32*)((char*)p + 0x694); }

}
