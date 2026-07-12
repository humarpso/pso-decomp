#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjPlayer__sub_8013DEF8(s32);
M2C_UNK fn_8013DFC4(s32);
s32 TChallenge4PResult__sub_801B3B90(s32, s32);
s32 TObjPlayer__sub_801D8474(s32, s32);
s32 TObjPlayer__sub_801D84B0(s32);

void fn_801D7C5C(s32 arg0, s32 arg1) {
    s32 var_r31;
    s32 var_r30;
    s32 temp_r29;

    var_r30 = 0;
    var_r31 = 0;
    do {
        s32 call_r3 = TObjPlayer__sub_801D84B0(arg0);
        temp_r29 = call_r3 + var_r31;
        if (TChallenge4PResult__sub_801B3B90(arg1, var_r30) == 0) {
            TObjPlayer__sub_8013DEF8(temp_r29);
        } else if (TObjPlayer__sub_801D8474(temp_r29, arg1) != 0) {
            fn_8013DFC4(temp_r29);
        } else {
            TObjPlayer__sub_8013DEF8(temp_r29);
        }
        var_r30 += 1;
        var_r31 += 4;
    } while (var_r30 < 4);
}

}
