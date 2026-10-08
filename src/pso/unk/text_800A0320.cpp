#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern const f32 lbl_805D9958;
s32 TObjPlayer__sub_800A0320(u8 *arg0);
M2C_UNK calc_recoil_offsets__10TObjPlayerFPv(f32);
extern const f32 lbl_805D995C;
s32 TObjPlayer__sub_800A0360(u8 *arg0);
M2C_UNK calc_recoil_offsets__10TObjPlayerFPv(f32);
extern const f32 lbl_805D9958;
s32 update_recoil_offset__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_800A0338(void);
int set_flags_and_apply_damage_color__10TObjPlayerFv(void);
int set_chunk_blend(int);

s32 TObjPlayer__sub_800A0320(u8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x18) > lbl_805D9958;
}

void TObjPlayer__sub_800A0338(void) { set_flags_and_apply_damage_color__10TObjPlayerFv(); set_chunk_blend(7424); }
s32 TObjPlayer__sub_800A0360(u8 *arg0) {
    f32 temp_f1;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x18);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) (temp_f1 + M2C_FIELD(arg0, f32 *, 0x10));
    calc_recoil_offsets__10TObjPlayerFPv((f32) (temp_f1));
    return M2C_FIELD(arg0, f32 *, 0x18) >= lbl_805D995C;
}
s32 update_recoil_offset__10TObjPlayerFPv(u8 *arg0) {
    f32 temp_f1;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x18);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) (temp_f1 - M2C_FIELD(arg0, f32 *, 0x10));
    calc_recoil_offsets__10TObjPlayerFPv((f32) (temp_f1));
    return M2C_FIELD(arg0, f32 *, 0x18) <= lbl_805D9958;
}

}
