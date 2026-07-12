#include "types.h"

extern "C" {

void TLobby__sub_802D237C(void* a0);
int byteswap_trade_packet__6TLobbyFPv(void);

    extern int lbl_805D53A0;
void TLobby__sub_802D237C(void* a0) { *(short*)((char*)a0 + 0x2) = lbl_805D53A0; byteswap_trade_packet__6TLobbyFPv(); }

}
