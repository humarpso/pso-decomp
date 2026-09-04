#include "types.h"

extern "C" {

s32 get_tp__10TObjPlayerFPv(void* p);
void set_effect_state__10TObjPlayerFPvi(void* p, s32 v);

s32 get_tp__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0x1c0); }
void set_effect_state__10TObjPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x1c4) = v; }

}
