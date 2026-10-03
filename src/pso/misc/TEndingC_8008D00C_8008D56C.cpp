extern "C" {
    int bind_gvm_texture_list(void*, void*);
    extern unsigned char lbl_804398EC[];
    extern unsigned char lbl_8048EB30[];
    extern int lbl_805D4F18;
void register_texture_ed_512kabe_c(void) { lbl_805D4F18 = (int)lbl_8048EB30; bind_gvm_texture_list(lbl_804398EC, lbl_8048EB30); }
}
