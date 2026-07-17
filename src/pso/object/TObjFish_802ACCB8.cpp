#include "types.h"

extern "C" {

s32 get_phase__8TObjFishFPv(void* p);

s32 get_phase__8TObjFishFPv(void* p) { return *(s32*)((char*)p + 0x378); }

}
