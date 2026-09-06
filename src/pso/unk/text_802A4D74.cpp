#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void TObjWarpString__sub_80145750(void *, s32, f32, f32);
extern const f32 lbl_805DDF80;
extern const f32 lbl_805DDF84;
void fn_802A4D74(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3);
}

extern "C" {

void fn_802A4D74(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3) {
    TObjWarpString__sub_80145750(arg2, arg1, lbl_805DDF80 + M2C_FIELD(arg0, f32 *, 0x1C), lbl_805DDF84 + M2C_FIELD(arg0, f32 *, 0x20));
    TObjWarpString__sub_80145750(arg3, arg1, lbl_805DDF80 + M2C_FIELD(arg0, f32 *, 0x3C), lbl_805DDF84 + M2C_FIELD(arg0, f32 *, 0x40));
}

}
