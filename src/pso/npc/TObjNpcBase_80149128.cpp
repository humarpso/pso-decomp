extern "C" {
    int load_encrypted_archive_data(void*);
    extern unsigned char lbl_8043F560[];
    extern int lbl_805D5738;
void load_ply_motion_npc_town(void) { lbl_805D5738 = load_encrypted_archive_data(lbl_8043F560); }
}
