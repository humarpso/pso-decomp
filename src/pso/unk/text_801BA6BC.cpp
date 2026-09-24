#include "types.h"
extern "C" {
extern void *lbl_8050EA10[];
void *TPlayerBattleCtrl4P__sub_801BA74C(s32 i);
}

extern "C" {

void *TPlayerBattleCtrl4P__sub_801BA74C(s32 i) {
    if (i == 0xFFFF) {
        return 0;
    }
    if (i < 0 || i >= 12) {
        return 0;
    }
    return lbl_8050EA10[i];
}

}
