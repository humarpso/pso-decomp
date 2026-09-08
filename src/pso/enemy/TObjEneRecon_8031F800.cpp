#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
extern const f32 lbl_805DF44C;
void TObjEneRecon__sub_8031F800(u8 *arg0);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
void TObjEneRecon__sub_8031F800(u8 *arg0) {
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0x3DC) = (s32) M2C_FIELD(arg0, s32 *, 0x368);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3DC) <= 0) {
        M2C_FIELD(arg0, s32 *, 0x3DC) = 0;
    } else if ((s32) M2C_FIELD(arg0, s32 *, 0x368) >= 2) {
        M2C_FIELD(arg0, s32 *, 0x3DC) = 2;
    }
    M2C_FIELD(arg0, f32 *, 0x4D0) = (f32) M2C_FIELD(arg0, f32 *, 0x354);
    M2C_FIELD(arg0, f32 *, 0x4D4) = (f32) M2C_FIELD(arg0, f32 *, 0x358);
    if (M2C_FIELD(arg0, f32 *, 0x4D4) <= lbl_805DF44C) {
        M2C_FIELD(arg0, f32 *, 0x4D4) = (f32) lbl_805DF44C;
    }
    M2C_FIELD(arg0, s32 *, 0x3F8) = (s32) M2C_FIELD(arg0, f32 *, 0x360);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3F8);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x3F8) = 0;
    } else if (temp_r0 > 6) {
        M2C_FIELD(arg0, s32 *, 0x3F8) = 6;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3F8) == 0) {
        M2C_FIELD(arg0, s32 *, 0x3F4) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3F4) = 0x1E;
}
#pragma pop

}
