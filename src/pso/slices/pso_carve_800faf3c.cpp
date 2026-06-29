#include "types.h"

extern "C" {

s32 TFogCtrl__sub_800FB12C(void* p);

int TFogCtrl__sub_800FAF3C(void) { return 0; }
int TFogCtrl__sub_800FAFE0(void) { return 0; }
int TFogCtrl__sub_800FB06C(void) { return 0; }
int TFogCtrl__sub_800FB0F8(void) { return 0; }
s32 TFogCtrl__sub_800FB12C(void* p) { return *(s32*)((char*)p + 0x1c0); }

}
