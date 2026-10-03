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
extern const f32 lbl_805E03F0;
extern const f32 lbl_805E03F8;
extern const f32 lbl_805E0400;
extern const f32 lbl_805E0404;
extern const f32 lbl_805E0408;
extern const f32 lbl_805E041C;
void TWindowSubStatusDisp__sub_8036DA94(void);
M2C_UNK TCameraCtrl__sub_80068EF0();
M2C_UNK restore_full_screen_view__11TCameraCtrlFv();
M2C_UNK set_depth_buffer_settings_2__Fv();
M2C_UNK restore_saved_depth_alpha_state();
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
void TWindowSubStatusDisp__sub_8036DA94(void);
extern s32 lbl_805D7018;
extern s32 lbl_805D701C;
void TWindowSubStatusDisp__sub_8036DB54(void);
void TWindowCtrlMain__sub_801E352C(Desc_8036D774 *, int, int, f32);
extern const f32 lbl_805E03E8;
extern const f32 lbl_805E03EC;
extern const f32 lbl_805E03F0;
extern const f32 lbl_805E03F4;
extern const f32 lbl_805E03F8;
extern const f32 lbl_805E03FC;
void TWindowSubStatusDisp__sub_8036D774(void);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK begin_screen_draw(int);
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK draw_textured_quad_at_depth(void *, f32);
M2C_UNK set_draw_texture_and_color(int, int);
extern s32 lbl_805D7018;
void TWindowSubStatusDisp__sub_8036D88C(void);
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

void TWindowSubStatusDisp__sub_8036D774(void) {
    f32 verts[8];
    Desc_8036D774 d;
    u32 cols[4];
    d.pos = verts;
    d.col = cols;
    d.a = 0;
    d.n = 4;
    d.pos[0] = lbl_805E03E8;
    d.pos[1] = lbl_805E03EC;
    d.col[0] = 0xFF000000;
    d.pos[2] = lbl_805E03F0;
    d.pos[3] = lbl_805E03EC;
    d.col[1] = 0xFF000000;
    d.pos[4] = lbl_805E03F0;
    d.pos[5] = lbl_805E03F0;
    d.col[2] = 0xFF000000;
    d.pos[6] = lbl_805E03E8;
    d.pos[7] = lbl_805E03F0;
    d.col[3] = 0xFF000000;
    TWindowCtrlMain__sub_801E352C(&d, 4, 0x16, lbl_805E03F4);
    d.pos[0] = lbl_805E03F8;
    d.pos[1] = lbl_805E03F8;
    d.pos[2] = lbl_805E03FC;
    d.pos[3] = lbl_805E03F8;
    d.pos[4] = lbl_805E03FC;
    d.pos[5] = lbl_805E03EC;
    d.pos[6] = lbl_805E03F8;
    d.pos[7] = lbl_805E03EC;
    TWindowCtrlMain__sub_801E352C(&d, 4, 0x16, lbl_805E03F4);
}

void TWindowSubStatusDisp__sub_8036D88C(void) {
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

void TWindowSubStatusDisp__sub_8036DA94(void) {
  s32 var_r31;
  f32 buffer_8[8];
  f32 temp_f31;
  begin_screen_draw((int) 1);
  set_global_param__8TObjFishFi((void *) lbl_805D7018);
  set_draw_texture_and_color((int) 0, (int) (-1));
  var_r31 = 0;
  ;
  buffer_8[0] = lbl_805E03F8;
  buffer_8[1] = lbl_805E041C;
  buffer_8[2] = lbl_805E0408;
  buffer_8[3] = lbl_805E03F0;
  buffer_8[4] = lbl_805E03F8;
  buffer_8[5] = lbl_805E03F8;
  buffer_8[6] = lbl_805E0400;
  buffer_8[7] = lbl_805E0404;
  do
  {
    draw_textured_quad_at_depth((void *) (&buffer_8[0]), (f32) lbl_805E0400);
    var_r31 += 1;
    buffer_8[0] += lbl_805E0408;
    buffer_8[2] += lbl_805E0408;
  }
  while (var_r31 < 0xA);
  get_player__20TWindowSubStatusDispFv();
}
void TWindowSubStatusDisp__sub_8036DB54(void) {
    s32 var_r3;
    if ((u32) (*(u32 *)&lbl_805D7018) != 0U) {
        set_depth_buffer_settings_2__Fv();
        reset_transform_state__10TObjPlayerFv();
        begin_effect_render__13TParticleCtrlFv();
        restore_full_screen_view__11TCameraCtrlFv();
        TWindowSubStatusDisp__sub_8036DA94();
        TWindowSubStatusDisp__sub_8036D994();
        TWindowSubStatusDisp__sub_8036D88C();
        TWindowSubStatusDisp__sub_8036D774();
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
