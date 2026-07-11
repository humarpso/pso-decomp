#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80035FCC(void *);
extern const f32 lbl_805D8280;
extern const f32 lbl_805D82B4;
extern const f32 lbl_805D8328;

u8 TBoss2DeRolLe__sub_800346D8(u8 *arg0) {
    s32 temp_r0;

    fn_80035FCC(arg0 + 0x684);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x65C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805D8280;
        if (M2C_FIELD(arg0, f32 *, 0x69C) > lbl_805D82B4) {
            M2C_FIELD(arg0, s32 *, 0x65C) = 1;
        }
        break;
    case 1:
        if (fn_80035FCC(arg0 + 0x664) == 3) {
            M2C_FIELD(arg0, s32 *, 0x65C) = 2;
        }
        break;
    }
    if (M2C_FIELD(arg0, f32 *, 0x69C) > lbl_805D82B4) {
        M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805D8328;
    }
    return (u8) (M2C_FIELD(arg0, s32 *, 0x65C) == 2);
}

}
