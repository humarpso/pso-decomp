extern "C" {
    int fn_8000F950(void);
    int fn_80073DAC(void);
    extern int evt2_random_enemies_mode;
void THunterGuildSeqOffline__sub_80212800(void) { fn_80073DAC(); evt2_random_enemies_mode = 1; fn_8000F950(); }
}
