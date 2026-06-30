#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8007CB50();
s32 fn_8007CBC4();
M2C_UNK fn_8007CC68();
M2C_UNK fn_8007CFCC(M2C_UNK, s32 *);
s32 TAdPlayerLoadGC__sub_801E1E38(M2C_UNK);
extern s32 lbl_805D4E94;

s32 fn_8007CE14(void) {
    s32 sp8;

    fn_8007CFCC(1, &sp8);
    if (sp8 == 1) {
        if ((s32) lbl_805D4E94 != 0) {
            return -9;
        }
        fn_8007CC68();
loop_4:
        if (TAdPlayerLoadGC__sub_801E1E38(1) == 0) {
            lbl_805D4E94 = 0;
            return -5;
        }
        if (fn_8007CBC4() != 0) {
            if (fn_8007CB50() == 0) {
                lbl_805D4E94 = 1;
                return -9;
            }
            goto block_9;
        }
        goto loop_4;
    }
block_9:
    lbl_805D4E94 = 0;
    return sp8;
}

}
