#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Rect_8032A7C8 { f32 x, y, x2, y2; u8 pad[0x10]; };

struct Mc_8032A7C8 {
    u8 pad0[0x20];
    Rect_8032A7C8 rects[8];
    u32 f120;
    s32 f124;
    u8 pad128[4];
    s32 f12C;
};

extern "C" {
u32 get_mc_count__13TAdMcSelectGCFv(void);
s32 TAdMcSelectCursorGC__sub_8032A6D8(void *);
void *get_cursor_type__19TAdMcSelectCursorGCFi(s32);
s32 TAdMcSelectMcGC__sub_8032AAC4(void);
extern const f32 lbl_805DF74C;
extern const f32 lbl_805DF750;
extern const f32 lbl_805DF754;
extern const f32 lbl_805DF758;
void run_task__15TAdMcSelectMcGCFv(Mc_8032A7C8 *o);
}

extern "C" {

void draw_status_window__15TAdMcSelectMcGCFPv(u8 *arg0);
void render__15TAdMcSelectMcGCFv(void *arg0);
M2C_UNK draw_textured_quad_at_depth(void *, f32);
M2C_UNK begin_screen_draw(int);
M2C_UNK set_draw_texture_and_color(int, int);
M2C_UNK restore_saved_depth_alpha_state();
M2C_UNK get_player__20TWindowSubStatusDispFv();
s32 get_state_flag__9TMainTaskFv();
M2C_UNK init_xyz_limits__10TObjPlayerFv();
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK set_depth_buffer_settings_2__Fv();
M2C_UNK set_global_param__8TObjFishFi(void *);
s32 toggle_flag_9_if_flag_10_is_clear__7TObjectFv();

extern s32 TAdMcSelectMcGC__data_805D6C98;
extern const f32 lbl_805DF748;

void draw_status_window__15TAdMcSelectMcGCFPv(u8 *arg0) {
    begin_screen_draw((int) (1));
    set_global_param__8TObjFishFi((void *) (TAdMcSelectMcGC__data_805D6C98));
    set_draw_texture_and_color((int) (0), (int) ((M2C_FIELD(arg0, s32 *, 0x120) << 0x18) | 0xFF0000 | 0xFFFF));
    draw_textured_quad_at_depth((void *) (arg0 + 0x20), (f32) (lbl_805DF748));
    get_player__20TWindowSubStatusDispFv();
}

void render__15TAdMcSelectMcGCFv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) == 1) {
        if (get_state_flag__9TMainTaskFv() == 1) {
            return;
        }
        goto block_5;
    }
    if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv() == 0) {
        set_depth_buffer_settings_2__Fv();
block_5:
        init_xyz_limits__10TObjPlayerFv();
        draw_status_window__15TAdMcSelectMcGCFPv((u8 *)(arg0));
        reset_transform_state__10TObjPlayerFv();
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
            restore_saved_depth_alpha_state();
        }
    }
}
#pragma push
#pragma fp_contract on
#pragma fp_contract on
void run_task__15TAdMcSelectMcGCFv(Mc_8032A7C8 *o) {
    s32 i;
    void *cursor;
    for (i = 0; i < 8; i++) {
        o->rects[i].x = lbl_805DF750 * (f32)o->f12C + lbl_805DF74C;
        o->rects[i].y = lbl_805DF754;
        o->rects[i].x2 = lbl_805DF758 + o->rects[i].x;
        o->rects[i].y2 = lbl_805DF758 + o->rects[i].y;
    }
    if (get_mc_count__13TAdMcSelectGCFv() != 0 && o->f12C == TAdMcSelectMcGC__sub_8032AAC4()) {
        o->f120 >>= 1;
    }
    cursor = get_cursor_type__19TAdMcSelectCursorGCFi(o->f12C);
    if (cursor != NULL && TAdMcSelectCursorGC__sub_8032A6D8(cursor) == 0) {
        o->f124 = 0;
    }
    switch (o->f124) {
    case 0:
        if (cursor != NULL && TAdMcSelectCursorGC__sub_8032A6D8(cursor) > 0) {
            o->f124 = 1;
        }
        o->f120 = 0;
        break;
    case 1:
        if (cursor != NULL && TAdMcSelectCursorGC__sub_8032A6D8(cursor) > 3) {
            o->f124 = 2;
        }
        o->f120 = 0;
        break;
    case 2:
        if (cursor != NULL && TAdMcSelectCursorGC__sub_8032A6D8(cursor) > 4) {
            o->f124 = 3;
        }
        o->f120 = 0;
        break;
    case 3:
        o->f120 = 0xFF;
        break;
    }
}
#pragma pop

}
