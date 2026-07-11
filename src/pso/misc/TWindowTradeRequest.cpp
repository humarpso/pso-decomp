#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_trade__19TWindowTradeRequestFv(void);
M2C_UNK reset__6TLobbyFv();
M2C_UNK TLobby__sub_802D3284(M2C_UNK, M2C_UNK);
M2C_UNK TWindowTradeRequest__sub_80249FCC();

extern u8 TLobby__data_805D688B;

void reset_trade__19TWindowTradeRequestFv(void) {
    if ((s32) TLobby__data_805D688B == 2) {
        TLobby__sub_802D3284(0, 3);
        TWindowTradeRequest__sub_80249FCC();
        reset__6TLobbyFv();
    }
}

}
