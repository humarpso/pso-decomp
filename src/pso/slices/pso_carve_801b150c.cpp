#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 obj_isState2_324();
M2C_UNK fn_8001BED8(s32, M2C_UNK);
s32 fn_80099EF8(s32);
u32 fn_801B15A4(s32);
M2C_UNK fn_801B4540(s32);
M2C_UNK fn_801B8DE8(s32, s32, M2C_UNK);
s32 fn_801D5764();

s32 fn_801B150C(s32 arg0) {
    s32 temp_r3;

    if (obj_isState2_324() != 0) {
        return 0;
    }
    if (fn_801B15A4(arg0) != 0U) {
        temp_r3 = fn_801D5764();
        if (temp_r3 == 0) {
            return 0;
        }
        fn_801B4540(arg0);
        fn_8001BED8(arg0 + 0x858, 4);
        fn_801B8DE8(arg0, fn_80099EF8(temp_r3), 1);
        return 1;
    }
    return 0;
}

}
