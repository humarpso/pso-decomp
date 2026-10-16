#include "types.h"
#include "pso/player/TUnk_804806E8.h"
#include "pso/misc/TUnk_8048E1A4.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
}

extern "C" {

s32 TObjPlayer__sub_80082300(void* p);

void TUnk_8048E1A4::apply_knockback_from_attacker(u8 *) {  }
void TObjPlayer::set_position_xy(f32 a, f32 b) { this->m_40 = a; *(f32*)((char*)this + 0x44) = b; }

f32 TUnk_804806E8::get_speed() { return *(f32 *)&this->m_c0; }

u8 TObjPlayer::test_action_mask(s32 arg1) {
    u8 *arg0 = (u8 *)this;
    return (u8) ((this->m_320 & arg1) != 0);
}

s32 TObjPlayer__sub_80082300(void* p) { return *(s32*)((char*)p + 0xc); }

}
