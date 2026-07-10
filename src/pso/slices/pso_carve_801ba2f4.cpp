#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 obj_testFlags30(s32, M2C_UNK);
M2C_UNK obj_clearFlags30(s32, M2C_UNK);
s32 check_flag30_bit20__10TObjPlayerFi();
s32 fn_801BEAA4(s32);
s32 fn_801BEAB0(s32);
M2C_UNK TObjPlayer__sub_801BF80C(s32, M2C_UNK);
s16 TObjPlayer__sub_801BF92C(s32);
s32 fn_801CB874(s32);
M2C_UNK fn_801D0BC0(s32, s16, M2C_UNK);

s32 fn_801BA2F4(s32 arg0) {
    if (check_flag30_bit20__10TObjPlayerFi() != 0) {
        fn_801D0BC0(arg0, 0x13, 5);
        return 1;
    }
    if (fn_801BEAB0(arg0) != 0) {
        if (obj_testFlags30(arg0, 0x400) != 0) {
            fn_801D0BC0(arg0, 0xE, 5);
        } else {
            fn_801D0BC0(arg0, 0xD, 5);
        }
        return 1;
    }
    if (fn_801CB874(arg0) != 0) {
        fn_801D0BC0(arg0, 0xA, 5);
        return 1;
    }
    if (fn_801BEAA4(arg0) != 0) {
        if (TObjPlayer__sub_801BF92C(arg0 + 0x5F0) == 0x10) {
            fn_801D0BC0(arg0, 0x10, 5);
        } else {
            obj_clearFlags30(arg0, 0x10000);
            fn_801D0BC0(arg0, TObjPlayer__sub_801BF92C(arg0 + 0x5F0), 5);
            TObjPlayer__sub_801BF80C(arg0 + 0x5F0, 0);
        }
        return 1;
    }
    return 0;
}

}
