#include "types.h"

extern "C" {

class TChCrCharSelect {
public:
    void handle_cursor_input();
    void handle_menu_input();
    void tick_and_apply_selection();
};

void reset_proportions__15TChCrCharSelectFv(void);
void reset_icon_flags__10TObjCMIconFv(void);
void TObjCMIcon__sub_802994C8(s32 arg0, s32 *arg1);
const s32 lbl_80464E90[2] = {0, 4};
s32 TChCrCharSelect__data_805D6590;
const s32 lbl_805DD9D8[1] = {4};

void run_task__15TChCrCharSelectFv(TChCrCharSelect *self) {
    reset_proportions__15TChCrCharSelectFv();
    static void (TChCrCharSelect::*tbl[3])() = {
        &TChCrCharSelect::handle_cursor_input, &TChCrCharSelect::handle_menu_input,
        &TChCrCharSelect::tick_and_apply_selection,
    };
    (self->*tbl[TChCrCharSelect__data_805D6590])();
    switch (TChCrCharSelect__data_805D6590) {
    case 0:
        TObjCMIcon__sub_802994C8(1, (s32 *)lbl_805DD9D8);
        return;
    case 1:
        TObjCMIcon__sub_802994C8(2, (s32 *)lbl_80464E90);
        return;
    case 2:
    default:
        reset_icon_flags__10TObjCMIconFv();
        return;
    }
}

}
