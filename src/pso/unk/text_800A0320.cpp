#include "types.h"
#include "pso/player/TUnk_80490470.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
extern const f32 lbl_805D9958;
s32 calc_recoil_offsets__13TUnk_80490470Fv(f32);
extern const f32 lbl_805D995C;
void TObjPlayer__sub_800A0338(void);
int set_chunk_blend(int);

s32 TUnk_80490470::vfunc_10() {
    u8 *arg0 = (u8 *)this;
    return *(f32 *)&this->unk_18 > lbl_805D9958;
}

void TObjPlayer__sub_800A0338(void) { TObjPlayer::set_flags_and_apply_damage_color(); set_chunk_blend(7424); }
s32 TUnk_80490470::advance_toward_max() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f1;
    temp_f1 = *(f32 *)&this->unk_18;
    *(f32 *)&this->unk_18 = (f32) (temp_f1 + *(f32 *)&this->unk_10);
    calc_recoil_offsets__13TUnk_80490470Fv((f32) (temp_f1));
    return *(f32 *)&this->unk_18 >= lbl_805D995C;
}
s32 TObjPlayer::update_recoil_offset() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f1;
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x18);
    *(f32 *)((s8 *)arg0 + 0x18) = (f32) (temp_f1 - *(f32 *)((s8 *)arg0 + 0x10));
    calc_recoil_offsets__13TUnk_80490470Fv((f32) (temp_f1));
    return *(f32 *)((s8 *)arg0 + 0x18) <= lbl_805D9958;
}

}
