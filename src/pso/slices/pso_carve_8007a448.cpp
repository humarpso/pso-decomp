#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80079108();
M2C_UNK fn_80079118(M2C_UNK *);
M2C_UNK fn_8007911C();
M2C_UNK fn_80079120(s32);
s32 fn_800791BC(s32, s32, u32 *);
u32 fn_80079C64(s32, u32 *, s32);
extern M2C_UNK lbl_804389CC[];
extern M2C_UNK lbl_80500140[];

M2C_UNK *fn_8007A448(s32 arg0, u32 *arg1, s32 arg2) {
    M2C_UNK *var_r31;

    fn_80079108();
    fn_8007911C();
    fn_80079120(arg0);
    var_r31 = lbl_80500140;
    if ((u32) *arg1 == 0U) {
        if (fn_80079C64(arg0, arg1, arg2) == 0U) {
            var_r31 = NULL;
        } else if (fn_800791BC(arg0, arg2, arg1) == 0) {
            var_r31 = NULL;
        }
    } else {
        if (fn_800791BC(arg0, arg2, arg1) != 0) {
            goto done;
        }
        if (fn_80079C64(arg0, arg1, arg2) == 0U) {
            var_r31 = NULL;
        } else if (fn_800791BC(arg0, arg2, arg1) == 0) {
            var_r31 = NULL;
        }
    }
done:
    fn_80079118(lbl_804389CC);
    return var_r31;
}

}
