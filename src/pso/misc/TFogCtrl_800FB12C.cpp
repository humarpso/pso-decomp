#include "types.h"

extern "C" {

s32 get_param__8TFogCtrlFPv(void* p);

s32 get_param__8TFogCtrlFPv(void* p) { return *(s32*)((char*)p + 0x1c0); }

}
