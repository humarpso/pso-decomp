#include "types.h"

extern "C" {

s32 obj_isState2_324();
s32 get_actor_level_index(void* p);

s32 get_actor_level_index(void* p) { return *(s32*)((char*)*(void**)((char*)p + 0x2b0) + 0x18); }

}
