extern "C" {
    int TLobby__sub_8023E4B4(void*, void*);
    extern unsigned char multi_confirm_texture_archive_name[];
    extern unsigned char lbl_804E706C[];
    extern int multi_confirm_texture_list;
void register_texture_f064_multiconfirm(void) { multi_confirm_texture_list = (int)lbl_804E706C; TLobby__sub_8023E4B4(multi_confirm_texture_archive_name, lbl_804E706C); }
}
