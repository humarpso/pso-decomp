#include "types.h"

extern "C" {

void TLobby__sub_800F8DD8(void);
void TLobby__sub_800F8F34(void);
void set_read_params__6TLobbyFiii(int a0, int a1, int a2);

    extern int lbl_805D5340;
    extern int lbl_805D5344;
    extern int lbl_805D5348;
void set_read_params__6TLobbyFiii(int a0, int a1, int a2) { lbl_805D5340 = a0; lbl_805D5344 = a1; lbl_805D5348 = a2; }

    extern int lbl_805D534C;
void TLobby__sub_800F8DD8(void) { lbl_805D534C = 1; }

    extern unsigned char lbl_805D5358;
void TLobby__sub_800F8F34(void) { lbl_805D5358 = 1; }

}
