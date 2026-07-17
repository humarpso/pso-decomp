#include "types.h"

extern "C" {

s32 get_slot_index__16TAdChrSelASlotGCFPv(void* p);

s32 get_slot_index__16TAdChrSelASlotGCFPv(void* p) { return *(s32*)((char*)p + 0x1c); }

}
