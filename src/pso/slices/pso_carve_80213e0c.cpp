extern "C" {
    int TKeyBoardControl__sub_8000F950(void);
    int clear_counter__6TLobbyFv(void);
    extern int evt2_random_enemies_mode;
void reset_random_enemies_mode(void) { clear_counter__6TLobbyFv(); evt2_random_enemies_mode = 0; TKeyBoardControl__sub_8000F950(); }
}
