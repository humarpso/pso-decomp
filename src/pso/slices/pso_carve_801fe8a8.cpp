#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdPlayerLoadGC__sub_80076BBC();
s32 TAdPlayerLoadGC__sub_801E0D8C(s32);
s32 TAdPlayerLoadGC__sub_801E2048(s32, M2C_UNK *);
s32 fn_801FD94C(s32);
s32 fn_801FEAFC();
M2C_UNK fn_80202BA8(M2C_UNK);
extern M2C_UNK lbl_804C89BC[];
extern u32 lbl_805D5F68;
extern s32 lbl_805D5F80;

s32 fn_801FE8A8(void) {
    s32 var_r31;

    var_r31 = 0xFFFF0000;
    if (((u32) lbl_805D5F68 != 0U) && (TAdPlayerLoadGC__sub_80076BBC() == 0) && (TAdPlayerLoadGC__sub_801E0D8C(lbl_805D5F80) != 0)) {
        var_r31 = TAdPlayerLoadGC__sub_801E2048(lbl_805D5F80, lbl_804C89BC);
        if ((var_r31 == 0) && (fn_801FEAFC() != 0)) {
            var_r31 = fn_801FD94C(lbl_805D5F80);
            if (var_r31 == 0) {
                fn_80202BA8(0xC);
            }
        }
    }
    return var_r31;
}

}
