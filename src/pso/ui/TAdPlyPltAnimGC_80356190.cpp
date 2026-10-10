extern "C" {
    int TLobby__sub_8023E4B4(void*, void*);
    extern unsigned char lbl_80479300[];
    extern unsigned char player_prate_texture_list[];
    extern int lbl_805D6F18;
void register_player_prate(void) { lbl_805D6F18 = (int)player_prate_texture_list; TLobby__sub_8023E4B4(lbl_80479300, player_prate_texture_list); }
}
