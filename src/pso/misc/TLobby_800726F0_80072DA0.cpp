#include "types.h"

extern "C" {

void play_default_effect__6TLobbyFPv(void* a0);
void show_ctrl_and_play_effect__6TLobbyFPv(void* a0);
int TObjPlayer__sub_8024ABDC(void*);
int TWindowCtrl__sub_8024AEAC(void*);
int play_player_default_effect__6TLobbyFv(void*);

    extern int lbl_805D53A0;
void show_ctrl_and_play_effect__6TLobbyFPv(void* a0) { TWindowCtrl__sub_8024AEAC((void*)(lbl_805D53A0)); play_player_default_effect__6TLobbyFv(a0); }

    extern int lbl_805D53A0;
void play_default_effect__6TLobbyFPv(void* a0) { TObjPlayer__sub_8024ABDC((void*)(lbl_805D53A0)); play_player_default_effect__6TLobbyFv(a0); }

}
