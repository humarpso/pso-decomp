#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_split_screen();

s32 TWindowMainMenu__sub_802ADCD8(void) {
    return (u32)__cntlzw(is_split_screen()) >> 5;
}

M2C_UNK fn_802AD74C();
s32 TWindowMainMenu__sub_802ADD38();

s32 TWindowMainMenu__sub_802ADD00(void) {
    s32 temp_r3;

    temp_r3 = TWindowMainMenu__sub_802ADD38();
    if (temp_r3 != 0) {
        fn_802AD74C();
    }
    return temp_r3;
}

}
