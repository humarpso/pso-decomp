#include "types.h"

extern "C" {

void prepare_trade_packet__6TLobbyFPv(void* a0);
int byteswap_trade_packet__6TLobbyFPv(void);

    extern int lbl_805D53A0;
void prepare_trade_packet__6TLobbyFPv(void* a0) { *(short*)((char*)a0 + 0x2) = lbl_805D53A0; byteswap_trade_packet__6TLobbyFPv(); }

}
