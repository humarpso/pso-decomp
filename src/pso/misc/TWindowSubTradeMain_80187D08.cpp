#include "types.h"

extern "C" {

void send_60_update__19TWindowSubTradeMainFPv(void* p);
int TLobby__send_and_handle_60(void*);
int TWindowSubTradeMain__sub_80187CCC(void*);
void init_pkt_cmd_6A__19TWindowSubTradeMainFPv(void* p);

void init_pkt_cmd_6A__19TWindowSubTradeMainFPv(void* p) { *(u8*)((char*)p + 0x0) = 106; *(u8*)((char*)p + 0x1) = 2; }

}
