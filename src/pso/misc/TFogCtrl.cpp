#include "types.h"

extern "C" {

void TFogCtrl__sub_800FBA54(void);
s32 get_param__8TFogCtrlFPv(void* p);
void render__8TFogCtrlFv(void);

s32 get_param__8TFogCtrlFPv(void* p) { return *(s32*)((char*)p + 0x1c0); }

void render__8TFogCtrlFv(void) {  }

void TFogCtrl__sub_800FBA54(void) {  }

}
