#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_spin__13TOCtrlDubchikFPv(u8 *arg0);
M2C_UNK fn_80011734(void *, void *, f32);
f32 fn_803D64C0(s32, s32, f32);

extern const f64 lbl_80440990;
extern const f32 lbl_805DB3B4;
extern const f32 lbl_805DB3B8;

void update_spin__13TOCtrlDubchikFPv(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x380);
    temp_f1 = (f32) temp_r4;
    M2C_FIELD(arg0, s32 *, 0x380) = (s32) (temp_f1 + lbl_805DB3B4);
    M2C_FIELD(arg0, f32 *, 0x37C) = (f32) (lbl_805DB3B8 + fn_803D64C0(M2C_FIELD(arg0, s32 *, 0x380), temp_r4, temp_f1));
    fn_80011734(arg0, arg0 + 0x390, M2C_FIELD(arg0, f32 *, 0x37C));
    M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (M2C_FIELD(arg0, s32 *, 0x38C) + 0x147);
}

}
