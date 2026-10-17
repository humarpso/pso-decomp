#include "pso/ui/TAdPlyPltAnimGC_80356190.h"

extern "C" {
    int TLobby__sub_8023E4B4(void*, void*);
    extern unsigned char lbl_80479300[];
    extern unsigned char player_prate_texture_list[];
    extern int player_prate_texture_list_ptr;
void register_player_prate(void) { player_prate_texture_list_ptr = (int)player_prate_texture_list; TLobby__sub_8023E4B4(lbl_80479300, player_prate_texture_list); }
}
