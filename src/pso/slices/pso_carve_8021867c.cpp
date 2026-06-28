extern "C" {
    int fn_8000F950(void);
    int fn_80073DAC(void);
    extern int lbl_805D5EDC;
void fn_8021867C(void) { fn_80073DAC(); lbl_805D5EDC = 3; fn_8000F950(); }
}
