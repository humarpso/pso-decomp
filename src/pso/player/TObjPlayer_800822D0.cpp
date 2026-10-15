#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
}

extern "C" {

void TObjPlayer__sub_800822D0(void);
s32 TObjPlayer__sub_80082300(void* p);

void TObjPlayer__sub_800822D0(void) {  }
void TObjPlayer::set_position_xy(f32 a, f32 b) { *(f32*)((char*)this + 0x40) = a; *(f32*)((char*)this + 0x44) = b; }

f32 TObjPlayer::get_speed() { return *(f32*)((char*)this + 0xc0); }

u8 TObjPlayer::test_action_mask(s32 arg1) {
    u8 *arg0 = (u8 *)this;
    return (u8) ((*(s32 *)((s8 *)arg0 + 0x320) & arg1) != 0);
}

s32 TObjPlayer__sub_80082300(void* p) { return *(s32*)((char*)p + 0xc); }

}
