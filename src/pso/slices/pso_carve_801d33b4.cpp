#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjPlayer__sub_801D2E20(void *, void *, f32, f32);
extern const f32 lbl_805DC3BC;
extern const f32 lbl_805DC3C0;
extern const f32 lbl_805DC3C4;

void fn_801D33B4(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 2) = 0;
    M2C_FIELD(arg0, s16 *, 0) = 0;
    M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_805DC3BC;
    M2C_FIELD(arg0, s16 *, 0x12) = 0;
    M2C_FIELD(arg0, s16 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_805DC3C0;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805DC3BC;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805DC3BC;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_805DC3C4;
    TObjPlayer__sub_801D2E20(arg0 + 0x30, arg0, lbl_805DC3C0, lbl_805DC3BC);
}

}
