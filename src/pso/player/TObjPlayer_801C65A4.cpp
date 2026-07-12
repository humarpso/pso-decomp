#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801C65A4(s32 arg0);
M2C_UNK TObjPlayer__sub_801C7264(s32);
s32 TWindowSubComCard__sub_801058F8(s32);
s32 __nw__7TObjectFUl(M2C_UNK);
s32 check_flag_0x8000__10TObjPlayerFPv();
M2C_UNK fn_801C6518(s32, s32, s32);
s32 obj_getField1c(s32);
s32 obj_isState3_324(s32);

extern s32 tl_06;

void TObjPlayer__sub_801C65A4(s32 arg0) {
    s32 temp_r3;

    if ((check_flag_0x8000__10TObjPlayerFPv() != 0) || (obj_isState3_324(arg0) != 0) || (TWindowSubComCard__sub_801058F8(arg0) != 0)) {
        TObjPlayer__sub_801C7264(arg0);
        return;
    }
    temp_r3 = __nw__7TObjectFUl(0x24);
    if (temp_r3 != 0) {
        fn_801C6518(temp_r3, tl_06, obj_getField1c(arg0));
    }
}

}
