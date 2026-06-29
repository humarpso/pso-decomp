#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80132F2C(M2C_UNK, M2C_UNK);
s32 fn_80203418();
s32 fn_802034EC(s32);
M2C_UNK fn_802661D4(s32, s32, M2C_UNK, s32);
M2C_UNK TObjCityMainWarp__sub_80266354(s32, s32, M2C_UNK, s32);

void TWindowSubItem__sub_80279CB8(s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r31;
    s32 temp_r3;

    temp_r3 = (u32)__cntlzw(4 - (arg3 & 0xF)) >> 5;
    temp_r31 = temp_r3 + 4;
    if ((fn_802034EC(temp_r3) == 0) || (fn_80203418() != 0)) {
        fn_802661D4(arg2, fn_80132F2C(0x10, 0xF), 6, temp_r31);
        return;
    }
    TObjCityMainWarp__sub_80266354(arg2, fn_80132F2C(0x10, 0xF), 0x26, temp_r31);
}

}
