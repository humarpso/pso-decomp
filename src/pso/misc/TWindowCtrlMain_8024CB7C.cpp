#include "pso/misc/WindowControlState.h"

#include "types.h"
struct Ent_8024CCDC { u8 p0[8]; f32 f8; f32 fC; u8 p10[0xC]; };

extern "C" {
extern WindowControlState TWindowCtrlMain__data_80518730[6];
void TWindowCtrlMain__sub_8024CCDC(void);
}

extern "C" {
s32 is_split_screen();
extern s32 TWindowCtrlMain__data_805D6400;
extern WindowControlState TWindowCtrlMain__data_80518730[6];

void TWindowCtrlMain__sub_8024CB7C() {
    TWindowCtrlMain__data_805D6400 |= 1;
}

void TWindowCtrlMain__sub_8024CB8C() {
    TWindowCtrlMain__data_805D6400 &= ~1;
}

f32 get_field_18__15TWindowCtrlMainFv(s32 viewport_index) {
    return get_window_control_state(viewport_index)->field18;
}

f32 get_ctrl_field14__15TWindowCtrlMainFv(s32 viewport_index) {
    return get_window_control_state(viewport_index)->field14;
}

f32 get_field10__15TWindowCtrlMainFv(s32 viewport_index) {
    return get_window_control_state(viewport_index)->field10;
}

f32 get_position_z__15TWindowCtrlMainFv(s32 viewport_index) {
    return get_window_control_state(viewport_index)->field0C;
}

void set_field18__15TWindowCtrlMainFf(f32 value, s32 viewport_index) {
    get_window_control_state(viewport_index)->field18 = value;
}

void set_depth__15TWindowCtrlMainFf(f32 value, s32 viewport_index) {
    get_window_control_state(viewport_index)->field0C = value;
}

WindowControlState* get_window_control_state(s32 viewport_index) {
    if (is_split_screen()) {
        return &TWindowCtrlMain__data_80518730[viewport_index];
    }
    return TWindowCtrlMain__data_80518730;
}
void TWindowCtrlMain__sub_8024CCDC(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        Ent_8024CCDC *e = &((Ent_8024CCDC *)&TWindowCtrlMain__data_80518730)[i];
        f32 *q;
        if (e->fC >= 0.1f) {
            e->f8 += 0.09f;
        } else {
            e->f8 -= 0.09f;
        }
        q = &e->f8;
        if (*q > 1.0f) {
            *q = 1.0f;
        }
        if (*q < 0.0f) {
            *q = 0.0f;
        }
    }
}

}
