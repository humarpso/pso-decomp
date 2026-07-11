extern "C" {
    int TKeyBoardControl__sub_8000F950(void);
    int fn_80073DAC(void);
    extern int evt2_random_enemies_mode;
void fn_80213E38(void) { fn_80073DAC(); evt2_random_enemies_mode = 2; TKeyBoardControl__sub_8000F950(); }
}
