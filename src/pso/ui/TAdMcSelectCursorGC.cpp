#include "types.h"
#include "pso/ui/TAdMcSelectCursorGC.h"

struct Ent_8032A574 { f32 a, b, c, d; u8 pad[0x10]; };

struct Obj_8032A574 {
    s32 f0; u8 pad[0x14]; void *vt; s32 f1C; s32 f20; s32 f24; u8 pad2[0x38 - 0x28];
    Ent_8032A574 ents[8];
};

struct Alt_8032A574 { u8 pad[0x128]; s32 f128, f12C, f130, f134, f138, f13C; };

struct Rect_8032A2A4 { f32 x0, y0, x1, y1; u8 pad[0x10]; };

struct Self_8032A2A4 {
    u8 pad0[0x1c];
    s32 f1C;
    s32 f20;
    s32 f24;
    Rect_8032A2A4 rects[8];
    u32 f128;
};

extern "C" {
void __ct__7TObjectFP7TObject(void *);
extern s32 __vt__19TAdMcSelectCursorGC[];
extern s32 lbl_805D41D0;
extern const f32 lbl_805DF740;
extern const f32 lbl_805DF744;
Obj_8032A574 *TAdMcSelectCursorGC__ct(Obj_8032A574 *arg0);
s32 dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(void *, s32, s32, s32);
s32 apply_choice__20TWindowChoiceSettingFiiii(void *, s32, s32, s32);
void play_sound_effect(s32, s32, s32, s32);
s32 TAdMcSelectCursorGC__sub_8032A6D8(u32);
u32 get_cursor_type__19TAdMcSelectCursorGCFi(s32);
extern u8 controller_input_state[];
extern u8 controller_physical_port_bank[];
extern const f32 lbl_805DF72C;
extern const f32 lbl_805DF730;
extern const f32 lbl_805DF734;
extern const f32 lbl_805DF738;
extern const f32 lbl_805DF73C;
}

extern "C" {

void *__dt__19TAdMcSelectCursorGCFv(void *arg0, s16 arg1);
s32 draw_textured_quad_at_depth(void *, f32);
s32 begin_screen_draw(int);
s32 set_draw_texture_and_color(int, int);
s32 __dl__7TObjectFPv(void *);
s32 __dt__7TObjectFv(void *, s32);
s32 restore_saved_depth_alpha_state();
s32 get_player__20TWindowSubStatusDispFv();
s32 get_state_flag__9TMainTaskFv();
s32 init_xyz_limits__10TObjPlayerFv();
s32 reset_transform_state__10TObjPlayerFv();
s32 set_depth_buffer_settings_2__Fv();
s32 set_global_param__8TObjFishFl(void *);
s32 toggle_flag_9_if_flag_10_is_clear__7TObjectFv();

extern s32 TAdMcSelectCursorGC__texture_entry;
extern const f32 lbl_805DF728;

void TAdMcSelectCursorGC::render_cursor() {
    u8 *arg0 = (u8 *)this;
    begin_screen_draw((int) (1));
    set_global_param__8TObjFishFl((void *) (TAdMcSelectCursorGC__texture_entry));
    set_draw_texture_and_color((int) (0), (int) ((*(s32 *)((s8 *)arg0 + 0x128) << 0x18) | 0xFF0000 | 0xFFFF));
    draw_textured_quad_at_depth((void *) (arg0 + 0x28), (f32) (lbl_805DF728));
    get_player__20TWindowSubStatusDispFv();
}

void TAdMcSelectCursorGC::render() {
    if ((s32) *(s32 *)((s8 *)this + 0x13C) == 1) {
        if (get_state_flag__9TMainTaskFv() == 1) {
            return;
        }
        goto block_5;
    }
    if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv() == 0) {
        set_depth_buffer_settings_2__Fv();
block_5:
        init_xyz_limits__10TObjPlayerFv();
        render_cursor();
        reset_transform_state__10TObjPlayerFv();
        if ((s32) *(s32 *)((s8 *)this + 0x13C) == 0) {
            restore_saved_depth_alpha_state();
        }
    }
}

extern s32 __vt__19TAdMcSelectCursorGC[];
extern u32 TAdMcSelectCursorGC__instance;

#pragma fp_contract on
void TAdMcSelectCursorGC::run_task() {
    Self_8032A2A4 *self = (Self_8032A2A4 *)this;
    u32 t2;
    u32 t;
    u32 t1;
    s32 i;
    if (self->f1C == 0) {
        t = get_cursor_type__19TAdMcSelectCursorGCFi(1 - self->f20);
        if (dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(controller_physical_port_bank + 0x20, 0x80, 6, 1) != 0 ||
            apply_choice__20TWindowChoiceSettingFiiii(controller_input_state + 0x160, 0x80, 6, 1) != 0) {
            if (TAdMcSelectCursorGC__sub_8032A6D8(t) >= 4) {
                self->f20++;
                if (self->f20 > 1) {
                    self->f20 = 1;
                }
            }
        } else if ((dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(controller_physical_port_bank + 0x20, 0x40, 6, 1) != 0 ||
                    apply_choice__20TWindowChoiceSettingFiiii(controller_input_state + 0x160, 0x40, 6, 1) != 0) &&
                   TAdMcSelectCursorGC__sub_8032A6D8(t) >= 4) {
            self->f20--;
            if (self->f20 < 0) {
                self->f20 = 0;
            }
        }
    }
    t1 = get_cursor_type__19TAdMcSelectCursorGCFi(self->f20);
    t2 = get_cursor_type__19TAdMcSelectCursorGCFi(1 - self->f20);
    if (t1 != 0 && TAdMcSelectCursorGC__sub_8032A6D8(t1) == 0) {
        if (t2 != 0 && TAdMcSelectCursorGC__sub_8032A6D8(t2) == 0) {
            self->f128 = 0;
        } else {
            self->f20 = 1 - self->f20;
        }
    } else {
        self->f128 += 0x19;
        self->f128 = self->f128 > 0xFF ? 0xFF : self->f128;
    }
    for (i = 0; i < 8; i++) {
        self->rects[i].x0 = lbl_805DF730 * self->f20 + lbl_805DF72C;
        self->rects[i].y0 = lbl_805DF734;
        self->rects[i].x1 = lbl_805DF738 + self->rects[i].x0;
        self->rects[i].y1 = lbl_805DF73C;
    }
    if (self->f20 != self->f24) {
        play_sound_effect(0x54100, 0, 0, 0);
        self->f128 = 0;
    }
    self->f24 = self->f20;
}

void *__dt__19TAdMcSelectCursorGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TAdMcSelectCursorGC;
        if ((u32) TAdMcSelectCursorGC__instance != 0U) {
            TAdMcSelectCursorGC__instance = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
Obj_8032A574 *TAdMcSelectCursorGC__ct(Obj_8032A574 *arg0) {
    s32 i;
    __ct__7TObjectFP7TObject(arg0);
    arg0->vt = ((u8 *)&__vt__19TAdMcSelectCursorGC);
    arg0->f0 = lbl_805D41D0;
    ((Alt_8032A574 *)arg0)->f138 = 0;
    ((Alt_8032A574 *)arg0)->f12C = 0;
    ((Alt_8032A574 *)arg0)->f134 = 0;
    ((Alt_8032A574 *)arg0)->f128 = 0;
    ((Alt_8032A574 *)arg0)->f13C = 1;
    arg0->f1C = 0;
    arg0->f20 = 0;
    arg0->f24 = arg0->f20;
    for (i = 0; i < 8; i++) {
        arg0->ents[i].a = lbl_805DF740;
        arg0->ents[i].b = lbl_805DF740;
        arg0->ents[i].c = lbl_805DF744;
        arg0->ents[i].d = lbl_805DF744;
    }
    return arg0;
}

}
