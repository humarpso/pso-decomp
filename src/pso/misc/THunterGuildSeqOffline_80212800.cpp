#include "types.h"

extern "C" {

void set_enemy_mode_1__22THunterGuildSeqOfflineFv(void);
int TKeyBoardControl__sub_8000F950(void);
int TLobby__sub_80073DAC(void);

    extern int evt2_random_enemies_mode;
void set_enemy_mode_1__22THunterGuildSeqOfflineFv(void) { TLobby__sub_80073DAC(); evt2_random_enemies_mode = 1; TKeyBoardControl__sub_8000F950(); }

}
