#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_string__20TWindowSubStatusDispFPvUi(void *arg0, u32 arg1);
s32 TWindowSubStatusDisp__sub_80228C30(u32);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
M2C_UNK free__11TOBoss4RockFUi(s32);
M2C_UNK strncpy(s32, u32, s32);

extern f32 lbl_805DD008;

void set_string__20TWindowSubStatusDispFPvUi(void *arg0, u32 arg1) {
    s32 temp_r3;

    free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0x20));
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    if (arg1 != 0U) {
        M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DD008;
        temp_r3 = TWindowSubStatusDisp__sub_80228C30(arg1);
        M2C_FIELD(arg0, s32 *, 0x20) = alloc_buffer__11TOBoss4RockFPv(temp_r3 + 1);
        strncpy(M2C_FIELD(arg0, s32 *, 0x20), arg1, temp_r3 + 1);
    }
}

}
