#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern u16 trade_protocol_flags;
bool TWindowSubTradeMain__sub_802D3924(s32 arg0);
}

extern "C" {

void TWindowSubTradeMain__sub_802D3940(s32 arg0);
void TWindowSubTradeMain__sub_802D3958(s32 arg0);

extern u16 trade_protocol_flags;

bool TWindowSubTradeMain__sub_802D3924(s32 arg0) {
    return (trade_protocol_flags & (1 << arg0)) != 0;
}

void TWindowSubTradeMain__sub_802D3940(s32 arg0) {
    trade_protocol_flags &= ~(1 << arg0);
}

extern u16 trade_protocol_flags;

void TWindowSubTradeMain__sub_802D3958(s32 arg0) {
    trade_protocol_flags |= 1 << arg0;
}

}
