extern "C" {
    int fn_8000F950(void);
    int fn_80073DAC(void);
    extern int lbl_805D5EDC;
void fn_80213E38(void) { fn_80073DAC(); lbl_805D5EDC = 2; fn_8000F950(); }
}
