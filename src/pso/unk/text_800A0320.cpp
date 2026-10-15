#include "types.h"

extern "C" {
extern const f32 lbl_805D9958;
s32 TObjPlayer__sub_800A0320(u8 *arg0);
s32 calc_recoil_offsets__10TObjPlayerFPv(f32);
extern const f32 lbl_805D995C;
s32 TObjPlayer__sub_800A0360(u8 *arg0);
s32 calc_recoil_offsets__10TObjPlayerFPv(f32);
extern const f32 lbl_805D9958;
s32 update_recoil_offset__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_800A0338(void);
int set_flags_and_apply_damage_color__10TObjPlayerFv(void);
int set_chunk_blend(int);

s32 TObjPlayer__sub_800A0320(u8 *arg0) {
    return *(f32 *)((s8 *)arg0 + 0x18) > lbl_805D9958;
}

void TObjPlayer__sub_800A0338(void) { set_flags_and_apply_damage_color__10TObjPlayerFv(); set_chunk_blend(7424); }
s32 TObjPlayer__sub_800A0360(u8 *arg0) {
    f32 temp_f1;
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x18);
    *(f32 *)((s8 *)arg0 + 0x18) = (f32) (temp_f1 + *(f32 *)((s8 *)arg0 + 0x10));
    calc_recoil_offsets__10TObjPlayerFPv((f32) (temp_f1));
    return *(f32 *)((s8 *)arg0 + 0x18) >= lbl_805D995C;
}
s32 update_recoil_offset__10TObjPlayerFPv(u8 *arg0) {
    f32 temp_f1;
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x18);
    *(f32 *)((s8 *)arg0 + 0x18) = (f32) (temp_f1 - *(f32 *)((s8 *)arg0 + 0x10));
    calc_recoil_offsets__10TObjPlayerFPv((f32) (temp_f1));
    return *(f32 *)((s8 *)arg0 + 0x18) <= lbl_805D9958;
}

}
