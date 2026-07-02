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
s32 fn_801FDB58(s32);
extern M2C_UNK lbl_804C8914[];
extern u32 lbl_805D5F6C;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F8C;

s32 fn_801FE9D0(s32 arg0) {
    s32 var_r31;
    s32 var_r3;
    s32 temp_r3;

    var_r31 = 0xFFFF0000;
    if (((u32) lbl_805D5F6C != 0U) && (TAdPlayerLoadGC__sub_80076BBC() == 0)) {
        temp_r3 = fn_8001C5E8();
        lbl_805D5F8C = temp_r3;
        var_r31 = TAdPlayerLoadGC__sub_801E1B50(temp_r3);
        if (var_r31 == 0) {
            var_r31 = TAdPlayerLoadGC__sub_801E2048(lbl_805D5F8C, lbl_804C8914);
            if (var_r31 == 0) {
                var_r3 = fn_801FDB58(lbl_805D5F8C);
                if (var_r3 == 0) {
                    if (arg0 != 0) {
                        lbl_805D5F78 = 0x11;
                    } else {
                        lbl_805D5F78 = 0x10;
                    }
                }
                return var_r3;
            }
        }
    }
    var_r3 = var_r31;
    return var_r3;
}

}
