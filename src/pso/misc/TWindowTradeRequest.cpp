#include "types.h"

extern "C" {

void reset_trade__19TWindowTradeRequestFv(void);
s32 reset__6TLobbyFv();
s32 send_trade_proposal_result__6TLobbyFcc(s32, s32);
s32 close_request_window__19TWindowTradeRequestFv();

extern u8 TLobby__trade_proposal_state;

void reset_trade__19TWindowTradeRequestFv(void) {
    if ((s32) TLobby__trade_proposal_state == 2) {
        send_trade_proposal_result__6TLobbyFcc(0, 3);
        close_request_window__19TWindowTradeRequestFv();
        reset__6TLobbyFv();
    }
}

}
