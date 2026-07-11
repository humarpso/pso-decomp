#include "types.h"

extern "C" {

void TLobby__sub_801F1CE0(int a0);
int TLobby__sub_801F2BCC(void);

    extern int* TLobby__data_805D5E78;
void TLobby__sub_801F1CE0(int a0) { TLobby__data_805D5E78[(unsigned char)(a0)] = TLobby__sub_801F2BCC(); }

}
