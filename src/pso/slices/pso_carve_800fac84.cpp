#include "types.h"

extern "C" {

s32 TFogCtrl__sub_800FAC84(void* p);

s32 TFogCtrl__sub_800FAC84(void* p) { return *(s32*)((char*)*(void**)((char*)p + 0x174) + 0x40); }
int TFogCtrl__sub_800FAC90(void) { return 0; }

}
