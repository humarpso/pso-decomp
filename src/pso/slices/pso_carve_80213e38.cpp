extern "C" {
    int TKeyBoardControl__sub_8000F950(void);
    int TLobby__sub_80073DAC(void);
    extern int evt2_random_enemies_mode;
void set_random_enemies_mode(void) { TLobby__sub_80073DAC(); evt2_random_enemies_mode = 2; TKeyBoardControl__sub_8000F950(); }
}
