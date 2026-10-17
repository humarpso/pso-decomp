#include "pso/misc/WindowControlState.h"
#include "pso/misc/TWindowCtrlMain_8024CB7C.h"
#include "pso/misc/TWindowSubStatusDisp_803DEE6C.h"
#include "types.h"
#include "pso/misc/TWindowCtrlMain.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/object/TObjFish.h"

struct Ent_8024CCDC { u8 p0[8]; f32 f8; f32 fC; u8 p10[0xC]; };
struct RecoveredGlobal_8024CDD0_TWindowCtrlMain__data_80518730 {
    s32 value;
    u8 remaining[0xA4];
};
struct RecoveredGlobal_8024CE24_TWindowCtrlMain__data_80518730 {
    s32 value;
    u8 remaining[0xA4];
};
struct RecoveredGlobal_8024CE34_TWindowCtrlMain__data_80518730 {
    s32 value;
    u8 remaining[0xA4];
};

extern "C" {
s32 is_split_screen(void);
extern s32 TWindowCtrlMain__display_flags;
extern s32 TWindowCtrlMain__window_task_root;
extern WindowControlState TWindowCtrlMain__viewport_states[6];
struct Vec2_8024CE68 { f32 x, y; };
struct Poly_8024CE68 {
    Vec2_8024CE68 *verts;
    u32 *colors;
    s32 flags;
    s32 count;
};
struct Quad_8024CE68 { f32 x0, y0, x1, y1, u0, v0, u1, v1; };

void draw_color_lines(void *, int, int, f32);
extern void *lbl_805D63F0;

void TWindowCtrlMain__sub_8024CB7C() {
    TWindowCtrlMain__display_flags |= 1;
}

void TWindowCtrlMain__sub_8024CB8C() {
    TWindowCtrlMain__display_flags &= ~1;
}

f32 TWindowCtrlMain::get_field_18() {
    s32 viewport_index = (s32)this;
    return get_window_control_state(viewport_index)->field18;
}

f32 TWindowCtrlMain::get_ctrl_field14() {
    s32 viewport_index = (s32)this;
    return get_window_control_state(viewport_index)->field14;
}

f32 TWindowCtrlMain::get_field10() {
    s32 viewport_index = (s32)this;
    return get_window_control_state(viewport_index)->field10;
}

f32 TWindowCtrlMain::get_position_z() {
    s32 viewport_index = (s32)this;
    return get_window_control_state(viewport_index)->field0C;
}

void TWindowCtrlMain::set_field18(f32 value, s32 viewport_index) {
    get_window_control_state(viewport_index)->field18 = value;
}

void TWindowCtrlMain::set_depth(f32 value, s32 viewport_index) {
    get_window_control_state(viewport_index)->field0C = value;
}
}

WindowControlState* get_window_control_state(s32 viewport_index) {
    if (is_split_screen()) {
        return &TWindowCtrlMain__viewport_states[viewport_index];
    }
    return TWindowCtrlMain__viewport_states;
}

void TWindowCtrlMain::update_fade_alphas() {
    s32 i;
    for (i = 0; i < 4; i++) {
        Ent_8024CCDC *e = &((Ent_8024CCDC *)&TWindowCtrlMain__viewport_states)[i];
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

s32 TWindowCtrlMain__sub_8024CD5C(s32 viewport_index) {
    return get_window_control_state(viewport_index)->field04;
}
void TWindowCtrlMain::set_value(s32 arg0, s32 arg1) {
    get_window_control_state(arg0)->field04 = arg1;
}
s32 TWindowCtrlMain__sub_8024CDB0(void* p) { return TWindowCtrlMain__sub_8024CDD0((s32)p); }

#define TWindowCtrlMain__viewport_states (*(RecoveredGlobal_8024CDD0_TWindowCtrlMain__data_80518730 *)TWindowCtrlMain__viewport_states)
typedef char RecoveredGlobal_8024CDD0_TWindowCtrlMain__data_80518730_size[sizeof(RecoveredGlobal_8024CDD0_TWindowCtrlMain__data_80518730) == 0xA8 ? 1 : -1];
s32 TWindowCtrlMain__sub_8024CDD0(s32 arg0) {
    if (is_split_screen() != 0) {
        return *(s32 *)((s8 *)&TWindowCtrlMain__viewport_states.value + (arg0 * 0x1C));
    }
    return TWindowCtrlMain__viewport_states.value;
}
s32 TWindowCtrlMain__sub_8024CE24(void) {
    return *(s32 *)((s8 *)(&(*(RecoveredGlobal_8024CE24_TWindowCtrlMain__data_80518730 *)&TWindowCtrlMain__viewport_states).value) + 0x8C);
}
s32 TWindowCtrlMain__sub_8024CE34(void) {
    return *(s32 *)((s8 *)(&(*(RecoveredGlobal_8024CE34_TWindowCtrlMain__data_80518730 *)&TWindowCtrlMain__viewport_states).value) + 0x70);
}
#undef TWindowCtrlMain__viewport_states

s32 is_window_display_enabled(void) {
    if (TWindowCtrlMain__display_flags & 1) return 0;
    return 1;
}

bool TWindowCtrlMain__sub_8024CE58(void) {
    return TWindowCtrlMain__window_task_root != 0;
}

#pragma push
#pragma fp_contract on
void draw_menu_backdrop_gradients(s32 viewport_index) {
    Vec2_8024CE68 verts[4];
    Quad_8024CE68 q;
    Poly_8024CE68 poly;
    u32 colors[4];
    Poly_8024CE68 line;
    Vec2_8024CE68 lverts[2];
    u32 lcolors[2];
    WindowControlState *s;
    f32 alpha;
    s32 a;
    f32 y;
    u32 c;

    s = get_window_control_state(viewport_index);
    alpha = s->field08;
    if (alpha <= 0.0f) {
        return;
    }
    poly.verts = verts;
    poly.colors = colors;
    poly.flags = 0;
    poly.count = 4;
    colors[0] = 0xFF000000;
    colors[1] = 0xFF000000;
    colors[2] = 0xFF000000;
    colors[3] = 0xFF000000;
    verts[0].x = 0.0f;
    verts[0].y = 0.0f;
    verts[1].x = 0.5f * s->field0C;
    verts[1].y = 0.0f;
    verts[2].x = 0.5f * s->field0C;
    verts[2].y = 480.0f;
    verts[3].x = 0.0f;
    verts[3].y = 480.0f;
    ((TWindowCtrlMain *)(&poly))->draw_strip_swap_color(4, 22, -10.0f);

    verts[0].x = 0.5f * s->field0C;
    verts[0].y = 480.0f - 0.5f * (480.0f - s->field18);
    verts[1].x = 640.0f;
    verts[1].y = 480.0f - 0.5f * (480.0f - s->field18);
    verts[2].x = 640.0f;
    verts[2].y = 480.0f;
    verts[3].x = 0.5f * s->field0C;
    verts[3].y = 480.0f;
    ((TWindowCtrlMain *)(&poly))->draw_strip_swap_color(4, 22, -10.0f);

    colors[2] = 0;
    colors[3] = 0;
    verts[0].x = 0.5f * s->field0C;
    verts[0].y = 0.0f;
    verts[1].x = 0.5f * s->field0C;
    verts[1].y = 480.0f - 0.5f * (480.0f - s->field18);
    verts[2].x = s->field0C;
    verts[2].y = 480.0f - 0.5f * (480.0f - s->field18);
    verts[3].x = s->field0C;
    verts[3].y = 0.0f;
    ((TWindowCtrlMain *)(&poly))->draw_strip_swap_color(4, 22, -10.0f);

    verts[0].x = 0.5f * s->field0C;
    verts[0].y = 480.0f - 0.5f * (480.0f - s->field18);
    verts[1].x = 640.0f;
    verts[1].y = 480.0f - 0.5f * (480.0f - s->field18);
    verts[2].x = 640.0f;
    verts[2].y = s->field18;
    verts[3].x = 0.5f * s->field0C;
    verts[3].y = s->field18;
    ((TWindowCtrlMain *)(&poly))->draw_strip_swap_color(4, 22, -10.0f);

    begin_screen_draw(1);
    TObjFish::set_global_param((s32)lbl_805D63F0);
    a = (s32)(255.0f * alpha) << 24;
    set_draw_texture_and_color(11, a | 0xFFFFFF);

    for (y = s->field18; y > 0.0f; y -= 16.0f) {
        q.x0 = 0.0f;
        q.y0 = y - 16.0f;
        q.x1 = s->field0C;
        q.y1 = y;
        q.u0 = 0.07421875f;
        q.v0 = 0.93359375f;
        q.u1 = 0.13671875f;
        q.v1 = 0.99609375f;
        draw_textured_quad_at_depth((f32 *)&q, 0.1f);
    }
    for (y = s->field18; y < 480.0f; y += 16.0f) {
        q.x0 = 0.0f;
        q.y0 = y;
        q.x1 = 640.0f;
        q.y1 = 16.0f + y;
        q.u0 = 0.07421875f;
        q.v0 = 0.93359375f;
        q.u1 = 0.13671875f;
        q.v1 = 0.99609375f;
        draw_textured_quad_at_depth((f32 *)&q, 0.1f);
    }
    q.x0 = s->field0C;
    q.y0 = s->field18 - 16.0f;
    q.x1 = 16.0f + s->field0C;
    q.y1 = s->field18;
    q.u0 = 0.00390625f;
    q.v0 = 0.93359375f;
    q.u1 = 0.06640625f;
    q.v1 = 0.99609375f;
    draw_textured_quad_at_depth((f32 *)&q, 0.1f);
    TWindowSubStatusDisp::get_player();

    line.verts = lverts;
    line.colors = lcolors;
    line.flags = 0;
    line.count = 2;
    lcolors[1] = lcolors[0] = a | 0xEDFF;
    lverts[0].x = s->field0C;
    lverts[0].y = s->field10;
    lverts[1].x = s->field0C;
    lverts[1].y = s->field18 - 16.0f;
    draw_color_lines(&line, 2, 4, -10.0f);
    lverts[0].x = 16.0f + s->field0C;
    lverts[0].y = s->field18;
    lverts[1].x = s->field14;
    lverts[1].y = s->field18;
    draw_color_lines(&line, 2, 4, -10.0f);
}
#pragma pop
