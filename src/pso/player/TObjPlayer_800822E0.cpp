#include "types.h"

extern "C" {

void TObjPlayer__sub_800822D0(void);
void set_position_xy__10TObjPlayerFPvff(void* p, f32 a, f32 b);
f32 get_speed__10TObjPlayerFPv(void* p);
s32 TObjPlayer__sub_80082300(void* p);

f32 get_speed__10TObjPlayerFPv(void* p) { return *(f32*)((char*)p + 0xc0); }

}
