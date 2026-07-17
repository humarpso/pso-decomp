extern "C" {
    int TKeyBoardControl__sub_8000F950(void);
    int set_enemy_mode_flag__6TLobbyFv(void);
    extern int evt2_random_enemies_mode;
void set_random_enemies_mode(void) { set_enemy_mode_flag__6TLobbyFv(); evt2_random_enemies_mode = 2; TKeyBoardControl__sub_8000F950(); }
}
