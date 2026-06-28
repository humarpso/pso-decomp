extern "C" {
    int fn_8000F950(void);
    int fn_801A3B84(void);
    extern int lbl_805D5EDC;
void fn_801E99DC(void) { fn_801A3B84(); lbl_805D5EDC = 0; fn_8000F950(); }
}
