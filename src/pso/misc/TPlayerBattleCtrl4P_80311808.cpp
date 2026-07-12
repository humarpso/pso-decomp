#include "types.h"

extern "C" {

void reset_random_enemies_mode__19TPlayerBattleCtrl4PFv(void);
int TKeyBoardControl__sub_8000F950(void);
int TLobby__sub_801A3B84(void);
int TLobby__sub_801D76B0(void*);

    extern unsigned char lbl_8050EA40[];
    extern int evt2_random_enemies_mode;
void reset_random_enemies_mode__19TPlayerBattleCtrl4PFv(void) { TLobby__sub_801A3B84(); evt2_random_enemies_mode = 0; TKeyBoardControl__sub_8000F950(); TLobby__sub_801D76B0(lbl_8050EA40); }

}
