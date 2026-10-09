#include "types.h"

extern "C" {

void TQuestBgmCtrl__sub_801E63F4(int a0);

    extern int TQuestBgmCtrl__bgm_issued_flag;
    extern int TQuestBgmCtrl__area_bgm_index;
void TQuestBgmCtrl__sub_801E63F4(int a0) { TQuestBgmCtrl__area_bgm_index = a0; TQuestBgmCtrl__bgm_issued_flag = 0; }

}
