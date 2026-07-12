#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_from_key__20TWindowSubSymbolChatFii(s32 arg0, s32 arg1);
M2C_UNK set_selection__20TWindowSubSymbolChatFPvUi(s32, s32);
s32 TWindowSubSymbolChat__sub_80077480(s32);

void set_from_key__20TWindowSubSymbolChatFii(s32 arg0, s32 arg1) {
    M2C_UNK8 *tmp = (M2C_UNK8 *)TWindowSubSymbolChat__sub_80077480(arg1);
    set_selection__20TWindowSubSymbolChatFPvUi(arg0, (s32)tmp);
}

}
