#include "pso/TWindowEffectLight.h"

TWindowEffectLight::~TWindowEffectLight() {}

#include "types.h"

struct Quad_802AD1CC { f32 x0, y0, x1, y1, u0, v0, u1, v1; };

struct Light_802AD1CC { u8 pad0[0x1C]; f32 x; f32 y; };

extern "C" {
s32 __cvt_fp2unsigned(f32);
extern const f32 lbl_805DE0E0;
extern const f32 lbl_805DE0E8;
extern const f32 lbl_805DE0EC;
extern const f32 lbl_805DE0F0;
u32 calc_alpha__18TWindowEffectLightFPv(u8 *arg0);
extern const f32 lbl_805DE0E0;
extern const f32 TWindowEffectLight__data_805DE0E4;
extern const f32 lbl_805DE0E8;
f32 calc_scale__18TWindowEffectLightFPv(u8 *arg0);
s32 is_split_screen(void);
u16 get_nth_view_player_id__11TCameraCtrlFi(s32);
void TCameraCtrl__sub_80068EF0(void);
void restore_full_screen_view__11TCameraCtrlFv(void);
void reset_transform_state__10TObjPlayerFv(void);
void init_xyz_limits__10TObjPlayerFv(void);
s32 get_camera_no__11TCameraCtrlFv(void);
void begin_effect_render__13TParticleCtrlFv(void);
void end_effect_render__13TParticleCtrlFv(void);
s32 is_window_display_enabled(void);
void TWindowEffectLight__sub_802AD040(void *, f32);
s32 set_global_param__8TObjFishFi(s32);
void begin_screen_draw(s32);
void get_player__20TWindowSubStatusDispFv(void);
extern s32 lbl_805D63F0;
extern const f32 lbl_805DE0F4;
extern const f32 lbl_805DE128;
extern const f32 lbl_805DE12C;
extern const f32 lbl_805DE130;
void render__18TWindowEffectLightFv(u8 *arg0);
s32 copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
s32 get_split_screen_view_index__11TCameraCtrlFUs(u16);
s32 __ct__7TObjectFP7TObject(void *, int);
s32 adjust_pos_for_split_screen__19TWindowKeyBoardSoftFPvi(void *, s32);
extern void *__vt__18TWindowEffectLight[];
extern s32 lbl_805D3E60;
extern s32 tl_window;
s32 get_camera_id__11TCameraCtrlFv();
f32 calc_scale__18TWindowEffectLightFPv(u8 *arg0);
u32 calc_alpha__18TWindowEffectLightFPv(u8 *arg0);
s32 draw_textured_quad_at_depth(void *, f32);
s32 set_draw_texture_and_color(int, int);
extern const f32 TWindowEffectLight__data_805DE0E4;
extern const f32 lbl_805DE10C;
extern const f32 lbl_805DE110;
extern const f32 lbl_805DE114;
extern const f32 lbl_805DE118;
extern const f32 lbl_805DE11C;
extern const f32 lbl_805DE120;
extern const f32 lbl_805DE124;
void draw_outline_quad__18TWindowEffectLightFv(Light_802AD1CC *self, s32 color);
}

extern "C" {

void draw_outline_quad__18TWindowEffectLightFv(Light_802AD1CC *self, s32 color) {
    Quad_802AD1CC q;
    f32 s;
    f32 w;
    f32 h;
    color |= ((s32 (*)(u8 *))calc_alpha__18TWindowEffectLightFPv)((u8 *)self);
    s = calc_scale__18TWindowEffectLightFPv((u8 *)self);
    if (get_camera_id__11TCameraCtrlFv() <= 2 && get_camera_id__11TCameraCtrlFv() == 2) {
        s *= lbl_805DE10C;
    }
    set_draw_texture_and_color(2, color);
    q.x0 = self->x - lbl_805DE110 * s;
    q.y0 = self->y - lbl_805DE114 * s;
    q.x1 = self->x + lbl_805DE110 * s;
    q.y1 = self->y + lbl_805DE114 * s;
    q.u0 = lbl_805DE118;
    q.v0 = lbl_805DE11C;
    q.u1 = lbl_805DE120;
    q.v1 = lbl_805DE124;
    draw_textured_quad_at_depth(&q, TWindowEffectLight__data_805DE0E4);
}

u8 *__ct__18TWindowEffectLightFv(u8 *self, void *arg1, s16 arg2, u32 arg3) {
    __ct__7TObjectFP7TObject(self, tl_window);
    *(void **)((s8 *)self + 0x18) = __vt__18TWindowEffectLight;
    *(s32 *)((s8 *)self + 0) = lbl_805D3E60;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(self + 0x1C, arg1);
    adjust_pos_for_split_screen__19TWindowKeyBoardSoftFPvi(self + 0x1C, get_split_screen_view_index__11TCameraCtrlFUs(arg3));
    *(s16 *)((s8 *)self + 0x24) = arg2;
    *(s16 *)((s8 *)self + 0x26) = -1;
    *(u32 *)((s8 *)self + 0x28) = arg3;
    return self;
}

void * create__18TWindowEffectLightFPvPvPv(void *arg0, void *arg1, void *arg2);
void run_task__18TWindowEffectLightFv(void *arg0);
u8 *__ct__18TWindowEffectLightFv(u8 *self, void *arg1, s16 arg2, u32 arg3);
void *__nw__7TObjectFUl(int);
s32 queue_destruction__7TObjectFv();

#pragma fp_contract on

#pragma fp_contract on
f32 calc_scale__18TWindowEffectLightFPv(u8 *arg0) {
  float new_var2;
  s16 *new_var;
  new_var2 = TWindowEffectLight__data_805DE0E4 * ((f32) (*(new_var = (s16 *) (((s8 *) arg0) + 0x26))));
  return (new_var2 * lbl_805DE0E8) + lbl_805DE0E0;
}

u32 calc_alpha__18TWindowEffectLightFPv(u8 *arg0) {
  float new_var;
  new_var = lbl_805DE0F0 * ((f32) (*((s16 *) (((s8 *) arg0) + 0x26))));
  return (u32)__cvt_fp2unsigned(lbl_805DE0EC * ((new_var * lbl_805DE0E8) + lbl_805DE0E0));
}

void render__18TWindowEffectLightFv(u8 *arg0) {
  s16 temp_r0;
  temp_r0 = 0x28;
  if ((is_window_display_enabled() != 0) && ((is_split_screen() == 0) || (((s32) (*((s32 *) (((s8 *) arg0) + temp_r0)))) == ((s32) get_nth_view_player_id__11TCameraCtrlFi(get_camera_no__11TCameraCtrlFv())))))
  {
    begin_effect_render__13TParticleCtrlFv();
    restore_full_screen_view__11TCameraCtrlFv();
    init_xyz_limits__10TObjPlayerFv();
    begin_screen_draw(1);
    set_global_param__8TObjFishFi(lbl_805D63F0);
    temp_r0 = *((s16 *) (((s8 *) arg0) + 0x24));
    {
      switch (temp_r0)
      {
        case 0:
          draw_outline_quad__18TWindowEffectLightFv((Light_802AD1CC *)(arg0), (s32)(0xAA0E));
          break;
        case 1:
          draw_outline_quad__18TWindowEffectLightFv((Light_802AD1CC *)(arg0), (s32)(0xFF2417));
          break;
        case 2:
          draw_outline_quad__18TWindowEffectLightFv((Light_802AD1CC *)(arg0), (s32)(0xFFFFFF));
          break;
        case 3:
          TWindowEffectLight__sub_802AD040(arg0, lbl_805DE0F4);
          break;
        case 4:
          TWindowEffectLight__sub_802AD040(arg0, lbl_805DE128);
          break;
        case 5:
          TWindowEffectLight__sub_802AD040(arg0, lbl_805DE12C);
          break;
        case 6:
          TWindowEffectLight__sub_802AD040(arg0, lbl_805DE130);
          break;
      }
    }
    get_player__20TWindowSubStatusDispFv();
    reset_transform_state__10TObjPlayerFv();
    TCameraCtrl__sub_80068EF0();
    end_effect_render__13TParticleCtrlFv();
  }
}

void run_task__18TWindowEffectLightFv(void *arg0) {
    s32 temp_r4;

    temp_r4 = *(s16 *)((s8 *)arg0 + 0x26) + 1;
    *(s16 *)((s8 *)arg0 + 0x26) = temp_r4;
    if ((s16)temp_r4 >= 8) {
        queue_destruction__7TObjectFv();
    }
}

void * create__18TWindowEffectLightFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = ((void *(*)(void *, void *, void *, void *))__ct__18TWindowEffectLightFv)(o, arg0, arg1, arg2);
    }
    return o;
}

}
