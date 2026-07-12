#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 TWindowSubStatusDisp__sub_80144D68(u32);
M2C_UNK free__11TOBoss4RockFUi(s32);
s32 TOBoss4Rock__sub_80147AA8(s32);
s32 fn_80228C30(u32);
M2C_UNK strncpy(s32, u32, s32);
extern const f64 lbl_8044F068[];
extern const f32 lbl_805DD00C;
extern const f32 lbl_805DD010;

void fn_8025B5AC(void *arg0, u32 arg1, s32 arg2) {
    s32 temp_r3;
    f64 tmp;

    free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0x1C));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    if (arg1 != 0U) {
        temp_r3 = fn_80228C30(arg1);
        M2C_FIELD(arg0, s32 *, 0x1C) = TOBoss4Rock__sub_80147AA8(temp_r3 + 1);
        strncpy(M2C_FIELD(arg0, s32 *, 0x1C), arg1, temp_r3 + 1);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x15);
    M2C_FIELD(arg0, f32 *, 8) = lbl_805DD00C - (lbl_805DD010 * (f32) TWindowSubStatusDisp__sub_80144D68(arg1));
}

}
