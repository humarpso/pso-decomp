#include "types.h"
#include "pso/misc/TWindowTradeRequest.h"

extern "C" {

s32 reset__6TLobbyFv();
s32 send_trade_proposal_result__6TLobbyFScSc(s32, s32);

extern u8 TLobby__trade_proposal_state;

void TWindowTradeRequest::reset_trade() {
    if ((s32) TLobby__trade_proposal_state == 2) {
        send_trade_proposal_result__6TLobbyFScSc(0, 3);
        TWindowTradeRequest::close_request_window();
        reset__6TLobbyFv();
    }
}

}
