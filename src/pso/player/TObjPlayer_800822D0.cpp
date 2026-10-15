#include "types.h"

extern "C" {
u8 test_action_mask__10TObjPlayerFPvi(u8 *arg0, s32 arg1);
}

extern "C" {

void TObjPlayer__sub_800822D0(void);
s32 TObjPlayer__sub_80082300(void* p);
f32 get_speed__10TObjPlayerFPv(void* p);
void set_position_xy__10TObjPlayerFPvff(void* p, f32 a, f32 b);

void TObjPlayer__sub_800822D0(void) {  }
void set_position_xy__10TObjPlayerFPvff(void* p, f32 a, f32 b) { *(f32*)((char*)p + 0x40) = a; *(f32*)((char*)p + 0x44) = b; }

f32 get_speed__10TObjPlayerFPv(void* p) { return *(f32*)((char*)p + 0xc0); }

u8 test_action_mask__10TObjPlayerFPvi(u8 *arg0, s32 arg1) {
    return (u8) ((*(s32 *)((s8 *)arg0 + 0x320) & arg1) != 0);
}

s32 TObjPlayer__sub_80082300(void* p) { return *(s32*)((char*)p + 0xc); }

}
