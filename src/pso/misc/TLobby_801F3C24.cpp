#include "types.h"

extern "C" {

void TLobby__sub_801F3C24(int a0);
int TLobby__sub_801F3B30(void);
int TLobby__sub_801F3BC4(void);
int TLobby__sub_801F4340(void);
int fn_8020A26C(void);
int fn_8020A2AC(void);
int TLobby__sub_8020AB30(void);
int TLobby__sub_8020AD20(void);

    extern int TLobby__data_805D5EE0;
    extern short TLobby__data_805D6134;
void TLobby__sub_801F3C24(int a0) { TLobby__data_805D5EE0 = a0; TLobby__sub_801F3BC4(); TLobby__sub_8020AD20(); fn_8020A2AC(); TLobby__sub_801F3B30(); fn_8020A26C(); TLobby__sub_8020AB30(); TLobby__sub_801F4340(); TLobby__data_805D6134 = 1; TLobby__data_805D5EE0 = 0; }

}
