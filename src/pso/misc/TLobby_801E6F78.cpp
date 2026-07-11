#include "types.h"

extern "C" {

void TLobby__sub_801E6F78(int a0);

    extern int TLobby__data_80512220[];
    extern int TLobby__data_805D5EA4;
void TLobby__sub_801E6F78(int a0) { int old = TLobby__data_805D5EA4; TLobby__data_805D5EA4 = old + 1; TLobby__data_80512220[old] = a0; }

}
