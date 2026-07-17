#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_card_confirmed__20TWindowSubSymbolChatFPv(void *arg0);
s32 TWindowSubComCard__sub_80265BF8(s32);
s32 TWindowSubComCard__sub_80265660(s32, s32);
s32 get_cursor_pos__20TWindowShortListCtrlFPv(s32);

s32 is_card_confirmed__20TWindowSubSymbolChatFPv(void *arg0) {
    if (TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, s32 *, 0x38)) != 0x20) {
        return 0;
    }
    s32 temp;
    s32 ret;

    temp = get_cursor_pos__20TWindowShortListCtrlFPv(M2C_FIELD(arg0, s32 *, 0x38));
    ret = TWindowSubComCard__sub_80265660(M2C_FIELD(arg0, s32 *, 0x38), temp);
    return ret ? 1 : 0;
}

}
