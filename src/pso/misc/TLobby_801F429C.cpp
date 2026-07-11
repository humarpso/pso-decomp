#include "types.h"

extern "C" {

void TLobby__sub_801F429C(int a0);
int TLobby__sub_801F3E1C(void);
int TLobby__sub_801F4340(void);

    extern int lbl_805D5EE0;
    extern short lbl_805D6134;
void TLobby__sub_801F429C(int a0) { lbl_805D5EE0 = a0; TLobby__sub_801F3E1C(); TLobby__sub_801F4340(); lbl_805D6134 = 1; lbl_805D5EE0 = 0; }

}
