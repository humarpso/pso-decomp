#include "types.h"

extern "C" {

void set_handler__6TLobbyFi(int a0);
int TLobby__sub_8002ADC8(void);

    extern int* TLobby__data_805D5E78;
void set_handler__6TLobbyFi(int a0) { TLobby__data_805D5E78[(unsigned char)(a0)] = TLobby__sub_8002ADC8(); }

}
