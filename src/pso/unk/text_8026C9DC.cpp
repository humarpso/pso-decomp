#include "types.h"
struct Pad_8026C9DC {
    u8 pad0[0x20];
    u8 buttons[0x30];
};

struct Ctl_8026C9DC {
    s8 cur;
    s8 count;
    u8 pad2[2];
    s32 port;
    f32 speed;
};

extern "C" {
s32 TWindowShortListCtrl__check_controller_button(void *, u32);
void play_sound_effect(s32, s32, s32, s32);
s32 is_player_input_active(s32);
void decay_page_arrow_offset(void);
extern Pad_8026C9DC controller_input_state[];
extern const f32 lbl_805DD294;
extern const f32 lbl_805DD298;
s32 handle_list_page_flip_input(Ctl_8026C9DC *arg0);
s32 handle_list_page_flip_input(Ctl_8026C9DC *arg0) {
    void *pad;
    s8 cur;
    decay_page_arrow_offset();
    cur = arg0->cur;
    pad = controller_input_state[is_player_input_active(arg0->port)].buttons;
    if (TWindowShortListCtrl__check_controller_button(pad, 0x30000) == 0) {
        return 0;
    }
    play_sound_effect(0x54100, 0, 0, 0);
    if (TWindowShortListCtrl__check_controller_button(pad, 0x10000) != 0) {
        cur++;
    }
    if (TWindowShortListCtrl__check_controller_button(pad, 0x20000) != 0) {
        cur--;
    }
    if (cur < 0) {
        cur = arg0->count - 1;
    }
    if (cur >= arg0->count) {
        cur = 0;
    }
    if (cur == arg0->cur) {
        return 0;
    }
    arg0->cur = cur;
    if (TWindowShortListCtrl__check_controller_button(pad, 0x10000) != 0) {
        arg0->speed = lbl_805DD294;
    } else {
        arg0->speed = lbl_805DD298;
    }
    return 1;
}

}
