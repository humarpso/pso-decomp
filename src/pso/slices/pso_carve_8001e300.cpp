#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8001DC30();
M2C_UNK fn_8001E2B8();
M2C_UNK fn_8001E2C0(s32);
M2C_UNK fn_8001E5C8();
extern s32 lbl_805D4AB4;
extern s32 lbl_805D4AB8;
extern s32 lbl_805D5550;

void fn_8001E300(void) {
    s32 temp_r31;
    s32 temp_r30;

    temp_r31 = lbl_805D4AB4;
    temp_r30 = lbl_805D4AB8;
    fn_8001E2C0(lbl_805D5550);
    fn_8001E5C8();
    fn_8001E2B8();
    if (((s32) lbl_805D4AB4 != temp_r31) || ((s32) lbl_805D4AB8 != temp_r30)) {
        fn_8001DC30();
    }
}

}
