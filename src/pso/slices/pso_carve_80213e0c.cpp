extern "C" {
    int TKeyBoardControl__sub_8000F950(void);
    int TLobby__sub_801A3B84(void);
    extern int evt2_random_enemies_mode;
void fn_80213E0C(void) { TLobby__sub_801A3B84(); evt2_random_enemies_mode = 0; TKeyBoardControl__sub_8000F950(); }
}
