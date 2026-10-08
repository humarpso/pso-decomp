#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Desc_8036D774 { f32 *pos; u32 *col; s32 a; s32 n; };

#include <stddef.h>
struct Stack_8036D88C {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
};

struct Stack_8036D994 {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
};

extern "C" {
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK begin_screen_draw(int);
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK draw_textured_quad_at_depth(void *, f32);
M2C_UNK set_draw_texture_and_color(int, int);
extern s32 lbl_805D7018;
void draw_bottom_bar__20TWindowSubStatusDispFv(void);
M2C_UNK TCameraCtrl__sub_80068EF0();
M2C_UNK restore_full_screen_view__11TCameraCtrlFv();
M2C_UNK set_depth_buffer_settings_2__Fv();
M2C_UNK restore_saved_depth_alpha_state();
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
void draw_bottom_bar__20TWindowSubStatusDispFv(void);
extern s32 lbl_805D7018;
extern s32 lbl_805D701C;
void draw_split_screen_hud__20TWindowSubStatusDispFv(void);
void draw_strip_swap_color__15TWindowCtrlMainFPviif(Desc_8036D774 *, int, int, f32);
void draw_split_screen_dividers__20TWindowSubStatusDispFv(void);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK begin_screen_draw(int);
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK draw_textured_quad_at_depth(void *, f32);
M2C_UNK set_draw_texture_and_color(int, int);
extern s32 lbl_805D7018;
void draw_tiled_background__20TWindowSubStatusDispFv(void);
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK init_xyz_limits__10TObjPlayerFv();
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK begin_screen_draw(int);
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK draw_textured_quad_at_depth(void *, f32);
M2C_UNK set_draw_texture_and_color(int, int);
extern s32 lbl_805D7018;
extern s32 lbl_805D701C;
void TWindowSubStatusDisp__sub_8036D994(void);
}

extern "C" {

void draw_split_screen_dividers__20TWindowSubStatusDispFv(void) {
    f32 verts[8];
    Desc_8036D774 d;
    u32 cols[4];
    d.pos = verts;
    d.col = cols;
    d.a = 0;
    d.n = 4;
    d.pos[0] = (1.6e+02f);
    d.pos[1] = (2.4e+02f);
    d.col[0] = 0xFF000000;
    d.pos[2] = (4.8e+02f);
    d.pos[3] = (2.4e+02f);
    d.col[1] = 0xFF000000;
    d.pos[4] = (4.8e+02f);
    d.pos[5] = (4.8e+02f);
    d.col[2] = 0xFF000000;
    d.pos[6] = (1.6e+02f);
    d.pos[7] = (4.8e+02f);
    d.col[3] = 0xFF000000;
    draw_strip_swap_color__15TWindowCtrlMainFPviif(&d, 4, 0x16, (-2.0f));
    d.pos[0] = (0.0f);
    d.pos[1] = (0.0f);
    d.pos[2] = (6.4e+02f);
    d.pos[3] = (0.0f);
    d.pos[4] = (6.4e+02f);
    d.pos[5] = (2.4e+02f);
    d.pos[6] = (0.0f);
    d.pos[7] = (2.4e+02f);
    draw_strip_swap_color__15TWindowCtrlMainFPviif(&d, 4, 0x16, (-2.0f));
}

void draw_tiled_background__20TWindowSubStatusDispFv(void) {
    s32 i;
    s32 j;
    f32 buf[8];
    begin_screen_draw((int) (1));
    set_global_param__8TObjFishFi((void *) (lbl_805D7018));
    set_draw_texture_and_color((int) (0), (int) (-1));
    i = 0;
    buf[4] = 0.5f;
    buf[5] = 0.0f;
    buf[6] = 1.0f;
    buf[7] = 0.5f;
    buf[0] = 0.0f;
    buf[2] = 64.0f;
    do {
        buf[1] = 192.0f;
        j = 0;
        buf[3] = 256.0f;
        do {
            draw_textured_quad_at_depth((void *) buf, 0.5f);
            j++;
            buf[1] += 64.0f;
            buf[3] += 64.0f;
        } while (j < 5);
        i++;
        buf[0] += 64.0f;
        buf[2] += 64.0f;
    } while (i < 10);
    get_player__20TWindowSubStatusDispFv();
}

#pragma push
#pragma fp_contract on
void TWindowSubStatusDisp__sub_8036D994(void) {
    s32 i;
    f32 buf[8];
    if (lbl_805D701C <= 0x1E) {
        init_xyz_limits__10TObjPlayerFv();
        begin_screen_draw((int) (1));
        set_global_param__8TObjFishFi((void *) (lbl_805D7018));
        set_draw_texture_and_color((int) (0), (int) (-1));
        i = 0;
        buf[0] = 0.0f;
        buf[1] = 10.133333f * lbl_805D701C + 176.0f;
        buf[2] = 64.0f;
        buf[3] = buf[1] + 64.0f;
        buf[4] = 0.5f;
        buf[5] = 0.5f;
        buf[6] = 1.0f;
        buf[7] = 1.0f;
        do {
            draw_textured_quad_at_depth((void *) buf, 0.5f);
            i++;
            buf[0] += 64.0f;
            buf[2] += 64.0f;
        } while (i < 10);
        get_player__20TWindowSubStatusDispFv();
        reset_transform_state__10TObjPlayerFv();
    }
}
#pragma pop

void draw_bottom_bar__20TWindowSubStatusDispFv(void) {
  s32 var_r31;
  f32 buffer_8[8];
  f32 temp_f31;
  begin_screen_draw((int) 1);
  set_global_param__8TObjFishFi((void *) lbl_805D7018);
  set_draw_texture_and_color((int) 0, (int) (-1));
  var_r31 = 0;
  ;
  buffer_8[0] = (0.0f);
  buffer_8[1] = (352.0f);
  buffer_8[2] = (64.0f);
  buffer_8[3] = (4.8e+02f);
  buffer_8[4] = (0.0f);
  buffer_8[5] = (0.0f);
  buffer_8[6] = (0.5f);
  buffer_8[7] = (1.0f);
  do
  {
    draw_textured_quad_at_depth((void *) (&buffer_8[0]), (f32) (0.5f));
    var_r31 += 1;
    buffer_8[0] += (64.0f);
    buffer_8[2] += (64.0f);
  }
  while (var_r31 < 0xA);
  get_player__20TWindowSubStatusDispFv();
}
void draw_split_screen_hud__20TWindowSubStatusDispFv(void) {
    s32 var_r3;
    if ((u32) (*(u32 *)&lbl_805D7018) != 0U) {
        set_depth_buffer_settings_2__Fv();
        reset_transform_state__10TObjPlayerFv();
        begin_effect_render__13TParticleCtrlFv();
        restore_full_screen_view__11TCameraCtrlFv();
        draw_bottom_bar__20TWindowSubStatusDispFv();
        TWindowSubStatusDisp__sub_8036D994();
        draw_tiled_background__20TWindowSubStatusDispFv();
        draw_split_screen_dividers__20TWindowSubStatusDispFv();
        TCameraCtrl__sub_80068EF0();
        end_effect_render__13TParticleCtrlFv();
        restore_saved_depth_alpha_state();
        var_r3 = lbl_805D701C;
        lbl_805D701C = var_r3 + 1;
        if (var_r3 > 0x708) {
            lbl_805D701C = 0;
        }
    }
}

}
