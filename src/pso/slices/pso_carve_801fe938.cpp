#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s8 fn_8001C5E8();
s32 TAdPlayerLoadGC__sub_80076BBC();
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 TAdPlayerLoadGC__sub_801E2048(s32, M2C_UNK *);
s32 fn_801FC564(s32);
M2C_UNK fn_80202BB0(M2C_UNK);
extern M2C_UNK lbl_804C89BC[];
extern u32 lbl_805D5F68;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F80;

s32 fn_801FE938(void) {
    s32 var_r31;
    s32 var_r3;
    s8 temp_r3;

    fn_80202BB0(0);
    var_r31 = 0xFFFF0000;
    if (((u32) lbl_805D5F68 != 0U) && (TAdPlayerLoadGC__sub_80076BBC() == 0)) {
        temp_r3 = fn_8001C5E8();
        lbl_805D5F80 = temp_r3;
        var_r31 = TAdPlayerLoadGC__sub_801E1B50(lbl_805D5F80);
        if (var_r31 == 0) {
            var_r31 = TAdPlayerLoadGC__sub_801E2048(lbl_805D5F80, lbl_804C89BC);
            if (var_r31 == 0) {
                var_r3 = fn_801FC564(lbl_805D5F80);
                if (var_r3 == 0) {
                    lbl_805D5F78 = 0xD;
                }
                return var_r3;
            }
        }
    }
    return var_r31;
}

}
