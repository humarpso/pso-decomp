#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 obj_testFlags30(s32, s32);
s32 fn_800A3224(s32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(s32);
M2C_UNK fn_803DA798(s32);
M2C_UNK fn_803E46BC(s32);
extern s32 lbl_805D5014;
extern s32 lbl_805D5018;
extern s32 lbl_805D501C;

void fn_800A1900(s32 arg0) {
    if (obj_testFlags30(arg0, 0x800) == 0) {
        if (fn_800A3224(arg0) == 0) {
            fn_803DA798(lbl_805D5014);
        } else {
            fn_803DA798(lbl_805D5018);
        }
        fn_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x3B4);
        fn_803E46BC(lbl_805D501C);
        fn_803D9B78();
    }
}

}
