#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80132F2C(M2C_UNK, M2C_UNK);
M2C_UNK fn_80265C30(s32);
M2C_UNK fn_80265F60(s32);
M2C_UNK TObjCityMainWarp__sub_80266354(s32, s32, M2C_UNK, M2C_UNK);
s32 fn_80266508(s32, M2C_UNK);
s32 fn_802D4D9C();

s32 fn_802D3ADC(s32 arg0, s32 arg1) {
    s32 var_r31 = arg1;

    if (fn_802D4D9C() != 0) {
        var_r31 = fn_80266508(arg1, 4);
        TObjCityMainWarp__sub_80266354(var_r31, fn_80132F2C(0x1E, 1), 6, 0);
        TObjCityMainWarp__sub_80266354(var_r31, fn_80132F2C(0x1E, 2), 6, 1);
        TObjCityMainWarp__sub_80266354(var_r31, fn_80132F2C(0x1E, 3), 6, 2);
        TObjCityMainWarp__sub_80266354(var_r31, fn_80132F2C(0x1E, 4), 6, 3);
    } else {
        var_r31 = fn_80266508(arg1, 3);
        TObjCityMainWarp__sub_80266354(var_r31, fn_80132F2C(0x1E, 1), 6, 0);
        TObjCityMainWarp__sub_80266354(var_r31, fn_80132F2C(0x1E, 3), 6, 2);
        TObjCityMainWarp__sub_80266354(var_r31, fn_80132F2C(0x1E, 4), 6, 3);
    }
    fn_80265F60(var_r31);
    fn_80265C30(var_r31);
    return var_r31;
}

}
