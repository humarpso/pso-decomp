#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_chat_parts__12TWindowTimerFPv(u8 *arg0);
s32 is_active__19TWindowSubShortMailFv();
M2C_UNK copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, s32);
s32 fn_80246CD0();
s32 fn_80246CDC();
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);

void update_chat_parts__12TWindowTimerFPv(u8 *arg0) {
    s32 var_r3;

    if (M2C_FIELD(arg0, s32 *, 0x60) & 1) {
        var_r3 = TWindowSubComCard__sub_8026CBB8(0xA9);
    } else if ((is_active__19TWindowSubShortMailFv() != 0) || (fn_80246CD0() != 0) || (fn_80246CDC() != 0)) {
        var_r3 = TWindowSubComCard__sub_8026CBB8(0xA8);
    } else {
        var_r3 = TWindowSubComCard__sub_8026CBB8(0x22);
    }
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(arg0 + 0x30, var_r3);
}

}
