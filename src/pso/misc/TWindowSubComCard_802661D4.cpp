#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubComCard__sub_802661D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK TWindowSubTradeMain__sub_80266200(s32, s32, s32, s32, s32);

void TWindowSubComCard__sub_802661D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    TWindowSubTradeMain__sub_80266200(arg0, arg1, arg2 | 0x10, arg3, 0xFF909090);
}

}
