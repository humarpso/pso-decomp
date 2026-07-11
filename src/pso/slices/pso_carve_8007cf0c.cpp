#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8007EBB4(s32);
M2C_UNK fn_800846C8(M2C_UNK);
s32 fn_800F9D38(s32);
s32 fn_800F9D80(s32);
M2C_UNK memmove(void *, void *, s32);
u32 xmalloc__FUl(M2C_UNK);
M2C_UNK memset(void *, s32, s32);
extern s32 lbl_805D28C0;
extern s16 lbl_805D4E8A;
extern u32 lbl_805D4E8C;
extern u32 lbl_805D4E90;
extern s32 lbl_805D4E94;

void load_data_buffers(void) {
    s32 temp_r31;
    s32 temp_r30;
    u32 temp_r3;

    lbl_805D4E94 = 0;
    lbl_805D4E90 = xmalloc__FUl(0x1E000);
    lbl_805D4E8A = 0;
    fn_800846C8(0);
    temp_r3 = xmalloc__FUl(0x1818C);
    lbl_805D4E8C = temp_r3;
    if (temp_r3 != 0U) {
        memset((void *)temp_r3, 0, 0x1818C);
    }
    temp_r31 = fn_800F9D80(lbl_805D28C0);
    if (temp_r31 <= 0x1818C) {
        temp_r30 = fn_800F9D38(lbl_805D28C0);
        if (temp_r30 != 0) {
            if ((u32) lbl_805D4E8C != 0U) {
                memmove((void *)lbl_805D4E8C, (void *)temp_r30, temp_r31);
            }
            fn_8007EBB4(temp_r30);
        }
    }
}

}
