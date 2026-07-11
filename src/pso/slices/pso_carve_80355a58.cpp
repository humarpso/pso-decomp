#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_800196EC();
s32 TObjPlayer__sub_800196F4(u32);
s8 fn_80102C30(void *);
M2C_UNK fn_8011EAB8(void *, s32, s32, f32);
s32 fn_802034EC();

void fn_80355A58(void *arg0, s32 arg1) {
    s32 temp_r31;

    if (((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) && (fn_802034EC() != 0)) {
        temp_r31 = TObjPlayer__sub_800196F4(M2C_FIELD(arg0, u32 *, 0xF0));
        {
        s32 t = TObjPlayer__sub_800196EC();
        if ((t == temp_r31) && (fn_80102C30(arg0) == 2)) {
            fn_8011EAB8(arg0, M2C_FIELD(arg0, u32 *, 0xF0) + 0x2FC, arg1, M2C_FIELD(arg0, f32 *, 0x1F8));
        }
        }
    }
}

}
