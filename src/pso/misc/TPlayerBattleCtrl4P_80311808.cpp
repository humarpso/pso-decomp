#include "types.h"

extern "C" {

void TPlayerBattleCtrl4P__sub_80311808(void);
int fn_8000F950(void);
int fn_801A3B84(void);
int fn_801D76B0(void*);

    extern unsigned char lbl_8050EA40[];
    extern int lbl_805D5EDC;
void TPlayerBattleCtrl4P__sub_80311808(void) { fn_801A3B84(); lbl_805D5EDC = 0; fn_8000F950(); fn_801D76B0(lbl_8050EA40); }

}
