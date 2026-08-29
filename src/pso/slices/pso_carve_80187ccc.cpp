#include "types.h"

extern "C" {

int bswap_16__FPUs(void* a0 = 0);
int read_be16_field2__10TObjPlayerFPv(void* a0 = 0);
void TWindowSubTradeMain__sub_80187CCC(void* p);
void send_60_update__19TWindowSubTradeMainFPv(void* p);
int TLobby__send_and_handle_60(void*);
void init_pkt_cmd_6A__19TWindowSubTradeMainFPv(void* p);

void TWindowSubTradeMain__sub_80187CCC(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

}
