#include "types.h"

extern "C" {

void set_enemy_mode_5__22THunterGuildSeqOfflineFv(void);
int TKeyBoardControl__sub_8000F950(void);
int set_enemy_mode_flag__6TLobbyFv(void);

    extern int evt2_random_enemies_mode;
void set_enemy_mode_5__22THunterGuildSeqOfflineFv(void) { set_enemy_mode_flag__6TLobbyFv(); evt2_random_enemies_mode = 5; TKeyBoardControl__sub_8000F950(); }

}
