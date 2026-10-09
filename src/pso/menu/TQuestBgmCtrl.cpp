#include "pso/TQuestBgmCtrl.h"

extern s32 TQuestBgmCtrl__bgm_issued_flag;
extern s32 TQuestBgmCtrl__bgm_forced_flag;
extern s32 TQuestBgmCtrl__area_bgm_index;
extern s32 TQuestBgmCtrl__instance;

extern "C" {
s32 get_register__12TQuestThreadFPvi(void *, int);
s32 play_area_music(int);
extern s32 quest_mission_manager;
extern void *lbl_804C6970[];
}

extern "C" u8 lbl_804498B8[];
extern "C" u8 lbl_804498C4[];
extern "C" u8 lbl_804498D0[];
extern "C" u8 lbl_804498E0[];
extern "C" u8 lbl_804498EC[];
extern "C" u8 lbl_804498F8[];
extern "C" u8 lbl_80449904[];
extern "C" u8 lbl_80449910[];
extern "C" u8 lbl_80449920[];
extern "C" u8 lbl_8044992C[];
extern "C" u8 lbl_80449938[];
extern "C" u8 lbl_80449944[];
extern "C" u8 lbl_80449950[];
extern "C" u8 lbl_80449960[];
extern "C" u8 lbl_80449970[];
extern "C" u8 lbl_8044997C[];
extern "C" u8 lbl_80449988[];
void TQuestBgmCtrl::run_task() {
    if (((s32) TQuestBgmCtrl__bgm_issued_flag == 0) && ((get_register__12TQuestThreadFPvi((void *) (quest_mission_manager), (int) (0xFF)) != 0) || ((s32) TQuestBgmCtrl__bgm_forced_flag != 0)) && ((s32) TQuestBgmCtrl__area_bgm_index > 0) && ((s32) TQuestBgmCtrl__area_bgm_index <= 0x11)) {
        play_area_music((s32) lbl_804C6970[TQuestBgmCtrl__area_bgm_index - 1]);
        TQuestBgmCtrl__bgm_issued_flag = 1;
    }
}

extern "C" void *lbl_804C6970[17] = {
    (void *)&lbl_804498B8, (void *)&lbl_804498C4, (void *)&lbl_804498D0, (void *)&lbl_804498E0,
    (void *)&lbl_804498EC, (void *)&lbl_804498F8, (void *)&lbl_80449904, (void *)&lbl_80449910,
    (void *)&lbl_80449920, (void *)&lbl_8044992C, (void *)&lbl_80449938, (void *)&lbl_80449944,
    (void *)&lbl_80449950, (void *)&lbl_80449960, (void *)&lbl_80449970, (void *)&lbl_8044997C,
    (void *)&lbl_80449988,
};

TQuestBgmCtrl::~TQuestBgmCtrl() {
    TQuestBgmCtrl__bgm_issued_flag = 0;
    TQuestBgmCtrl__bgm_forced_flag = 0;
    TQuestBgmCtrl__area_bgm_index = 0;
    TQuestBgmCtrl__instance = 0;
}
