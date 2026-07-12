#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjPlayer__sub_8001A4CC(s32, s8);
s32 fn_8001A678(s32);
s32 fn_8001A988();
extern s32 lbl_805D49E0;
extern s8 lbl_805D49E4;
extern s32 lbl_805D49E8;
extern s32 lbl_805D5550;

void fn_8001A808(s32 arg0) {
    if (((s32) lbl_805D5550 != 3) && (fn_8001A988() == 0)) {
        s32 temp;
        lbl_805D49E4 = (s8) arg0;
        temp = fn_8001A678(lbl_805D49E0);
        lbl_805D49E8 = temp;
        TObjPlayer__sub_8001A4CC(temp, (s8) arg0);
    }
}

}
