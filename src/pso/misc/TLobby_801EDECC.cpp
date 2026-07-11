#include "types.h"

extern "C" {

void store_status__6TLobbyFi(int a0);
int fn_801B0974(void);

    extern int* TLobby__data_805D5E78;
void store_status__6TLobbyFi(int a0) { TLobby__data_805D5E78[(unsigned char)(a0)] = fn_801B0974(); }

}
