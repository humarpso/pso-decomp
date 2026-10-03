extern "C" {
    int load_gvm_texture_file(void*);
    extern unsigned char lbl_8046FCA0[];
    extern int lbl_805D66D0;
void load_bg_lightning(void) { lbl_805D66D0 = load_gvm_texture_file(lbl_8046FCA0); }
}
