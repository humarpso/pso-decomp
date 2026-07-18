#include "types.h"

extern "C" {

void set_lobby_id__6TLobbyFi(int a0);
void set_global_805D3614__6TLobbyFi(int a0);
void TLobby__sub_801F36D8(void);
void TLobby__sub_801F36E4(void);
int TLobby__sub_801F36F0(void);
int TLobby__sub_801F36F8(void);
int TLobby__sub_801F3700(void);
int TLobby__sub_801F3708(void);

    extern int lbl_805D5FD8;
void set_lobby_id__6TLobbyFi(int a0) { lbl_805D5FD8 = a0; }

    extern int lbl_805D3614;
void set_global_805D3614__6TLobbyFi(int a0) { lbl_805D3614 = a0; }

    extern int lbl_805D5C80;
void TLobby__sub_801F36D8(void) { lbl_805D5C80 = 1; }

    extern int lbl_805D3458;
void TLobby__sub_801F36E4(void) { lbl_805D3458 = 0; }

int TLobby__sub_801F36F0(void) { return -1; }
int TLobby__sub_801F36F8(void) { return 0; }
int TLobby__sub_801F3700(void) { return -1; }
int TLobby__sub_801F3708(void) { return 0; }

}
