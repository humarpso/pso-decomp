#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8024422C(u32, f32, f32);
u32 fn_8026AE7C(s32, s32, M2C_UNK, s32);
s32 TLobby__sub_8030A6FC();
extern f32 lbl_805DC71C;
extern f32 lbl_805DC720;

u32 fn_80222A34(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 var_f31;

    if (TLobby__sub_8030A6FC() > 2) {
        var_f31 = lbl_805DC71C;
    } else {
        var_f31 = lbl_805DC720;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x20C) == 0U) {
        M2C_FIELD(arg0, u32 *, 0x20C) = fn_8026AE7C(arg1, arg2, 1, arg3);
        fn_8024422C(M2C_FIELD(arg0, u32 *, 0x20C), var_f31, var_f31);
        return M2C_FIELD(arg0, u32 *, 0x20C);
    }
    return 0U;
}

}
