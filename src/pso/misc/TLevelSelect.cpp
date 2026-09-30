#include "pso/TLevelSelect.h"

TLevelSelect::~TLevelSelect() {}

#include "types.h"

struct Self_80133068 { u8 pad[0x20]; s32 f20; s32 f24; };

extern "C" {
s32 TLevelSelect__sub_801F441C(int, int);
int TLevelSelect__sub_80132F9C(void);
void TKeyBoardControl__sub_8000F9CC(s32);
void queue_destruction__7TObjectFv(void *);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(s32, s32);
s32 get_selected_slot__23TAdSinglePlyChrSelectGCFPv(s32);
s32 TAdSinglePlyChrSelectGC__sub_801334DC(s32);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, s32);
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
void TAdMultiChgGameModeGC__sub_8023E834(void);
void set_game_mode_changed__21TAdMultiChgGameModeGCFv(void);
void set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s32, s32, u32);
extern u8 lbl_8050E208[];
extern u8 lbl_8050E3B8[];
extern s32 lbl_805D5550;
void run_task__12TLevelSelectFv(Self_80133068 *self);
}

extern "C" {

void render__12TLevelSelectFv(void);

void render__12TLevelSelectFv(void) {  }
int TLevelSelect__sub_80132F9C(void) {
    u8 f;
    int n;
    f = 0;
    if (TLevelSelect__sub_801F441C(0, 0x35) != 0 || TLevelSelect__sub_801F441C(0, 0x57) != 0) {
        f = 1;
    }
    n = f;
    f = 0;
    if (TLevelSelect__sub_801F441C(1, 0x37) != 0 || TLevelSelect__sub_801F441C(1, 0x57) != 0) {
        f = 1;
    }
    n += f;
    f = 0;
    if (TLevelSelect__sub_801F441C(2, 0x37) != 0 || TLevelSelect__sub_801F441C(2, 0x57) != 0) {
        f = 1;
    }
    n += f;
    return n;
}
void run_task__12TLevelSelectFv(Self_80133068 *self) {
    TAdMultiChgGameModeGC__sub_8023E834();
    if (lbl_805D5550 != TAdSinglePlyChrSelectGC__sub_801334DC(self->f20)) {
        set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(self->f24, 1, TAdSinglePlyChrSelectGC__sub_80132F2C(0xD, TAdSinglePlyChrSelectGC__sub_801334DC(self->f20) + 1));
    }
    lbl_805D5550 = TAdSinglePlyChrSelectGC__sub_801334DC(self->f20);
    switch (get_selected_slot__23TAdSinglePlyChrSelectGCFPv(self->f20)) {
    case 1:
        TKeyBoardControl__sub_8000F9CC(0xE);
        break;
    case 0:
    default:
        if (TWindowShortListCtrl__check_controller_button(&lbl_8050E3B8[0x20], 2) != 0 ||
            test_flag_4c__23TAdSinglePlyChrSelectGCFPv(&lbl_8050E208[0x160], 2) != 0) {
            queue_destruction__7TObjectFv(self);
            set_game_mode_changed__21TAdMultiChgGameModeGCFv();
        }
        break;
    }
}

}
