#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TWindowSubSymbolChat__sub_802484C0(s32);
s32 TWindowSubComCard__sub_80265BF8(s32);
s32 fn_802837A8();
M2C_UNK fn_80284CB8(s32);

void TWindowSubSymbolChat__sub_80281A94(void *arg0) {
    s32 temp_r3;

    temp_r3 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, s32 *, 0x38));
    switch (temp_r3) {
    case 22:
        M2C_FIELD(arg0, s8 *, 0x1C) = 0x18;
        return;
    case 26:
        fn_80284CB8(M2C_FIELD(arg0, s32 *, 0x4C));
        TWindowSubSymbolChat__sub_802484C0(M2C_FIELD(arg0, s32 *, 0x30));
        if (fn_802837A8() <= 0) {
            M2C_FIELD(arg0, s8 *, 0x1C) = 4;
            return;
        }
        M2C_FIELD(arg0, s8 *, 0x1C) = 0x14;
        return;
    }
}

}
