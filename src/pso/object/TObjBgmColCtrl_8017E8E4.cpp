#include "types.h"

extern "C" {

extern s32 lbl_805D62E4;

u8 is_active__14TObjBgmColCtrlFv(void) {
    return (u8) (lbl_805D62E4 != 0);
}

    extern int TQuestBgmCtrl__bgm_issued_flag;
int get_quest_bgm_issued_flag(void) {  return TQuestBgmCtrl__bgm_issued_flag; }

}
