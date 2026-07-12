#include "types.h"

extern "C" {

void TLobby__sub_802D237C(void* a0);
int TLobby__sub_802D3A1C(void);

    extern int lbl_805D53A0;
void TLobby__sub_802D237C(void* a0) { *(short*)((char*)a0 + 0x2) = lbl_805D53A0; TLobby__sub_802D3A1C(); }

}
