extern "C" {
    int fn_8000F950(void);
    int fn_801A3B84(void);
    extern int evt2_random_enemies_mode;
void THunterGuildSeqOffline__sub_8021282C(void) { fn_801A3B84(); evt2_random_enemies_mode = 0; fn_8000F950(); }
}
