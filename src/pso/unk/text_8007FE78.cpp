#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_800800EC_lbl_80438D7C {
    M2C_UNK value;
    u8 remaining[0x30];
};

extern "C" {
extern const RecoveredGlobal_800800EC_lbl_80438D7C lbl_80438D7C;
extern const f32 lbl_805D92D8;
extern const f32 lbl_805D92DC;
extern const f32 lbl_805D9300;
void fn_800800EC(M2C_UNK arg0, u8 *arg1, s32 arg2);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_800800EC_lbl_80438D7C_size[sizeof(RecoveredGlobal_800800EC_lbl_80438D7C) == 0x34 ? 1 : -1];
void fn_800800EC(M2C_UNK arg0, u8 *arg1, s32 arg2) {
    s32 temp_r0;
    temp_r0 = arg2 * 8;
    M2C_FIELD(arg1, f32 *, 0x10) = (f32) M2C_FIELD(((u8 *)(&lbl_80438D7C.value) + temp_r0), f32 *, 0);
    M2C_FIELD(arg1, f32 *, 0x14) = (f32) M2C_FIELD(((u8 *)(&lbl_80438D7C.value) + temp_r0), f32 *, 4);
    M2C_FIELD(arg1, f32 *, 0x18) = (f32) (lbl_805D92D8 + M2C_FIELD(arg1, f32 *, 0x10));
    M2C_FIELD(arg1, f32 *, 0x1C) = (f32) (lbl_805D92DC + M2C_FIELD(arg1, f32 *, 0x14));
    M2C_FIELD(arg1, f32 *, 0x10) = (f32) (M2C_FIELD(arg1, f32 *, 0x10) * lbl_805D9300);
    M2C_FIELD(arg1, f32 *, 0x14) = (f32) (M2C_FIELD(arg1, f32 *, 0x14) * lbl_805D9300);
    M2C_FIELD(arg1, f32 *, 0x18) = (f32) (M2C_FIELD(arg1, f32 *, 0x18) * lbl_805D9300);
    M2C_FIELD(arg1, f32 *, 0x1C) = (f32) (M2C_FIELD(arg1, f32 *, 0x1C) * lbl_805D9300);
}
#pragma pop

}
