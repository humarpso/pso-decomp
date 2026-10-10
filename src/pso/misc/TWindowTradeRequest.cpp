#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_trade__19TWindowTradeRequestFv(void);
M2C_UNK reset__6TLobbyFv();
M2C_UNK send_trade_proposal_result__6TLobbyFcc(M2C_UNK, M2C_UNK);
M2C_UNK close_request_window__19TWindowTradeRequestFv();

extern u8 TLobby__trade_proposal_state;

void reset_trade__19TWindowTradeRequestFv(void) {
    if ((s32) TLobby__trade_proposal_state == 2) {
        send_trade_proposal_result__6TLobbyFcc(0, 3);
        close_request_window__19TWindowTradeRequestFv();
        reset__6TLobbyFv();
    }
}

}
