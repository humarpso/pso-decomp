extern "C" {
    int set_flag_bit2__11TWindowCtrlFv(void);
    int fn_800FD884(void);
    int request_active_window_close(void);
    int fn_8024AB18(void*);
    extern int* lbl_805D5E78;
    extern int lbl_805D53A0;
    extern unsigned char lbl_805D5E88;
    extern int lbl_805D5E98;
void fn_801E765C(int a0) { lbl_805D5E78[(unsigned char)(a0)] = -1; lbl_805D5E88 = a0; lbl_805D5E98 = 12; set_flag_bit2__11TWindowCtrlFv(); fn_8024AB18((void*)(lbl_805D53A0)); request_active_window_close(); fn_800FD884(); }
}
