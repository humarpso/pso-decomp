#include "pso/TAdStorySelectGC.h"

TAdStorySelectGC::~TAdStorySelectGC() {}

#include "types.h"

struct Obj_802C3288 { u8 pad[0x1C]; s32 f1C; s32 f20; };

extern "C" {
void queue_destruction__7TObjectFv(void *);
s32 get_localized_text_entry(s32, s32);
s32 get_selected_slot__23TAdSinglePlyChrSelectGCFPv(s32);
s32 TAdSinglePlyChrSelectGC__sub_801334DC(s32);
s32 TAdStorySelectGC__sub_8019DC14(void);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, s32);
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
void set_state__16TAdStorySelectGCFi(s32);
void TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
void TAdMultiChgGameModeGC__sub_8023E834(void);
void set_change_mode_flags__21TAdMultiChgGameModeGCFv(void);
void set_game_mode__21TAdMultiChgGameModeGCFv(void);
void set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s32, s32, s32);
extern u8 lbl_8050E208[];
extern s32 lbl_805D67C0;
void run_task__16TAdStorySelectGCFv(Obj_802C3288 *self);
}

extern "C" {

void render__16TAdStorySelectGCFv(void);
void TObjPathObj__vt11(void);
void TObjPathObj__vt12(void);

void render__16TAdStorySelectGCFv(void) {  }
void run_task__16TAdStorySelectGCFv(Obj_802C3288 *self) {
    TAdMultiChgGameModeGC__sub_8023E834();
    if (lbl_805D67C0 != TAdSinglePlyChrSelectGC__sub_801334DC(self->f1C)) {
        set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(self->f20, 1, get_localized_text_entry(0x14, TAdSinglePlyChrSelectGC__sub_801334DC(self->f1C) + 1));
    }
    lbl_805D67C0 = TAdSinglePlyChrSelectGC__sub_801334DC(self->f1C);
    switch (get_selected_slot__23TAdSinglePlyChrSelectGCFPv(self->f1C)) {
    case 1:
        switch (TAdStorySelectGC__sub_8019DC14()) {
        case 0:
            set_state__16TAdStorySelectGCFi(0);
            break;
        case 1:
            set_state__16TAdStorySelectGCFi(1);
            break;
        }
        queue_destruction__7TObjectFv(self);
        set_change_mode_flags__21TAdMultiChgGameModeGCFv();
        break;
    case 0:
    default:
        if (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 2) != 0 ||
            test_flag_4c__23TAdSinglePlyChrSelectGCFPv(lbl_8050E208 + 0x160, 2) != 0) {
            TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
            set_game_mode__21TAdMultiChgGameModeGCFv();
        }
        break;
    }
}

}
