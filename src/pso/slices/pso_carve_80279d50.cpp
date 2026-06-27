#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubStatusDisp__sub_80077760(M2C_UNK);
s32 TOKeyMachine01__sub_802034A8();
M2C_UNK fn_802661D4(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK TObjCityMainWarp__sub_80266354(s32, s32, M2C_UNK, M2C_UNK);

void fn_80279D50(s32 arg0, s32 arg1) {
    if (TOKeyMachine01__sub_802034A8() == 0xF) {
        fn_802661D4(arg1, TWindowSubStatusDisp__sub_80077760(0x5F), 6, 6);
        return;
    }
    TObjCityMainWarp__sub_80266354(arg1, TWindowSubStatusDisp__sub_80077760(0x5F), 6, 6);
}

}
