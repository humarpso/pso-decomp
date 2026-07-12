#include "types.h"

extern "C" {

void send_60_update__19TWindowSubTradeMainFPv(void* p);
int TLobby__send_and_handle_60(void*);
int TWindowSubTradeMain__sub_80187CCC(void*);
void TWindowSubTradeMain__sub_80187D08(void* p);

void send_60_update__19TWindowSubTradeMainFPv(void* p) { TWindowSubTradeMain__sub_80187CCC(p); TLobby__send_and_handle_60(p); }

}
