#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_802A5B2C(s32);
s32 fn_802A5B50(s32, s32);
s32 fn_802A5BB4(s32);
M2C_UNK fn_802A6070(s32, s32);
M2C_UNK fn_802A6078(s32, s32);
extern s32 lbl_805D6694;
extern s32 lbl_805D669C;

void fn_802A7CBC(s32 arg0, s32 arg1) {
    s32 temp_r31;

    temp_r31 = fn_802A5BB4(lbl_805D6694);
    temp_r31 = lbl_805D6694 + temp_r31;
    temp_r31 = temp_r31 + arg0 * 8;
    fn_802A6078(arg1, lbl_805D669C + fn_802A5B50(temp_r31, lbl_805D6694));
    fn_802A6070(arg1, fn_802A5B2C(temp_r31));
}

}
