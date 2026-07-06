#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowTimer__sub_80287C18(u8 *arg0);
s32 TWindowSubShortMail__sub_80246CC4();
M2C_UNK TWindowSubSymbolChatPartsSet__sub_80052EA0(void *, s32);
s32 fn_80246CD0();
s32 fn_80246CDC();
s32 fn_8026CBB8(M2C_UNK);

void TWindowTimer__sub_80287C18(u8 *arg0) {
    s32 var_r3;

    if (M2C_FIELD(arg0, s32 *, 0x60) & 1) {
        var_r3 = fn_8026CBB8(0xA9);
    } else if ((TWindowSubShortMail__sub_80246CC4() != 0) || (fn_80246CD0() != 0) || (fn_80246CDC() != 0)) {
        var_r3 = fn_8026CBB8(0xA8);
    } else {
        var_r3 = fn_8026CBB8(0x22);
    }
    TWindowSubSymbolChatPartsSet__sub_80052EA0(arg0 + 0x30, var_r3);
}

}
