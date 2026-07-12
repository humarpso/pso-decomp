#include "types.h"

extern "C" {

void set_enemy_mode_0__22THunterGuildSeqOfflineFv(void);
int TKeyBoardControl__sub_8000F950(void);
int TLobby__sub_801A3B84(void);

    extern int evt2_random_enemies_mode;
void set_enemy_mode_0__22THunterGuildSeqOfflineFv(void) { TLobby__sub_801A3B84(); evt2_random_enemies_mode = 0; TKeyBoardControl__sub_8000F950(); }

}
