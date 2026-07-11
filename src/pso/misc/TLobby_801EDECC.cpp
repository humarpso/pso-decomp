#include "types.h"

extern "C" {

void TLobby__sub_801EDECC(int a0);
int fn_801B0974(void);

    extern int* TLobby__data_805D5E78;
void TLobby__sub_801EDECC(int a0) { TLobby__data_805D5E78[(unsigned char)(a0)] = fn_801B0974(); }

}
