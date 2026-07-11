#include "types.h"

extern "C" {

void set_enemy_mode_0__22THunterGuildSeqOfflineFv(void);
int fn_8000F950(void);
int fn_801A3B84(void);

    extern int evt2_random_enemies_mode;
void set_enemy_mode_0__22THunterGuildSeqOfflineFv(void) { fn_801A3B84(); evt2_random_enemies_mode = 0; fn_8000F950(); }

}
