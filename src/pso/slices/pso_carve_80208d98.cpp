#pragma fp_contract on
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 heap_alloc__5THeapFUl(s32, s32);
M2C_UNK fn_80208904(s32);
M2C_UNK fn_803DE778(s32, s32, s32);
extern M2C_UNK lbl_805139F8[];
extern s32 lbl_805D6094;

s32 fn_80208D98(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r29;
    s32 temp_r3;

    if (arg0 > 0x11) {
        return 0;
    }
    temp_r29 = arg0 * 4;
    if ((u32) *((s32 *)((s8 *)lbl_805139F8 + temp_r29)) != 0U) {
        return 0;
    }
    temp_r3 = heap_alloc__5THeapFUl(lbl_805D6094, arg2);
    if (temp_r3 != 0) {
        fn_803DE778(temp_r3, arg1, arg2);
        *((s32 *)((s8 *)lbl_805139F8 + temp_r29)) = temp_r3;
        fn_80208904(arg0);
        return 1;
    }
    return 0;
}

}
