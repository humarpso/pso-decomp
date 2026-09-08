#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK queue_destruction__7TObjectFv();
extern const f32 lbl_805D8A20;
extern const f32 lbl_805D8A24;
void fn_800500DC(u8 *arg0);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
void fn_800500DC(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xB8) + lbl_805D8A20;
    M2C_FIELD(arg0, f32 *, 0xB8) = temp_f1;
    if (temp_f1 >= lbl_805D8A24) {
        M2C_FIELD(arg0, f32 *, 0xB8) = (f32) lbl_805D8A24;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x90) + 1;
    M2C_FIELD(arg0, s32 *, 0x90) = temp_r0;
    if (temp_r0 >= 0x78) {
        queue_destruction__7TObjectFv();
    }
}
#pragma pop

}
