#include "pso/TWindowEffectLight.h"

TWindowEffectLight::~TWindowEffectLight() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 __cvt_fp2unsigned(f32);
extern const f32 lbl_805DE0E0;
extern const f32 lbl_805DE0E8;
extern const f32 lbl_805DE0EC;
extern const f32 lbl_805DE0F0;
void TWindowEffectLight__sub_802ACFE0(u8 *arg0);
extern const f32 lbl_805DE0E0;
extern const f32 TWindowEffectLight__data_805DE0E4;
extern const f32 lbl_805DE0E8;
f32 TWindowEffectLight__sub_802ACF9C(u8 *arg0);
s32 is_split_screen(void);
u16 TCameraCtrl__sub_80068958(s32);
void TCameraCtrl__sub_80068EF0(void);
void TCameraCtrl__sub_80069024(void);
void reset_transform_state__10TObjPlayerFv(void);
void init_xyz_limits__10TObjPlayerFv(void);
s32 get_camera_no__11TCameraCtrlFv(void);
void begin_effect_render__13TParticleCtrlFv(void);
void end_effect_render__13TParticleCtrlFv(void);
s32 TWindowCtrlMain__sub_8024CE44(void);
void TWindowEffectLight__sub_802AD040(void *, f32);
void TWindowEffectLight__sub_802AD1CC(void *, s32);
s32 set_global_param__8TObjFishFi(s32);
void TWindowSubStatusDisp__sub_803DEE6C(s32);
void get_player__20TWindowSubStatusDispFv(void);
extern s32 lbl_805D63F0;
extern const f32 lbl_805DE0F4;
extern const f32 lbl_805DE128;
extern const f32 lbl_805DE12C;
extern const f32 lbl_805DE130;
void render__18TWindowEffectLightFv(u8 *arg0);
M2C_UNK copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
s32 TCameraCtrl__sub_800688D0(u16);
M2C_UNK __ct__7TObjectFP7TObject(void *, int);
M2C_UNK TWindowKeyBoardSoft__sub_8024EC34(void *, s32);
extern void *__vt__18TWindowEffectLight[];
extern s32 lbl_805D3E60;
extern s32 tl_window;
}

extern "C" {

u8 *__ct__18TWindowEffectLightFv(u8 *self, void *arg1, s16 arg2, u32 arg3) {
    __ct__7TObjectFP7TObject(self, tl_window);
    M2C_FIELD(self, void **, 0x18) = __vt__18TWindowEffectLight;
    M2C_FIELD(self, s32 *, 0) = lbl_805D3E60;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(self + 0x1C, arg1);
    TWindowKeyBoardSoft__sub_8024EC34(self + 0x1C, TCameraCtrl__sub_800688D0(arg3));
    M2C_FIELD(self, s16 *, 0x24) = arg2;
    M2C_FIELD(self, s16 *, 0x26) = -1;
    M2C_FIELD(self, u32 *, 0x28) = arg3;
    return self;
}

void * create__18TWindowEffectLightFPvPvPv(void *arg0, void *arg1, void *arg2);
void run_task__18TWindowEffectLightFv(void *arg0);
u8 *__ct__18TWindowEffectLightFv(u8 *self, void *arg1, s16 arg2, u32 arg3);
void *__nw__7TObjectFUl(int);
M2C_UNK queue_destruction__7TObjectFv();

#pragma fp_contract on

#pragma fp_contract on
f32 TWindowEffectLight__sub_802ACF9C(u8 *arg0) {
  float new_var2;
  s16 *new_var;
  new_var2 = TWindowEffectLight__data_805DE0E4 * ((f32) (*(new_var = (s16 *) (((s8 *) arg0) + 0x26))));
  return (new_var2 * lbl_805DE0E8) + lbl_805DE0E0;
}

void TWindowEffectLight__sub_802ACFE0(u8 *arg0) {
  float new_var;
  new_var = lbl_805DE0F0 * ((f32) (*((s16 *) (((s8 *) arg0) + 0x26))));
  __cvt_fp2unsigned(lbl_805DE0EC * ((new_var * lbl_805DE0E8) + lbl_805DE0E0));
}

void render__18TWindowEffectLightFv(u8 *arg0) {
  s16 temp_r0;
  temp_r0 = 0x28;
  if ((TWindowCtrlMain__sub_8024CE44() != 0) && ((is_split_screen() == 0) || (((s32) (*((s32 *) (((s8 *) arg0) + temp_r0)))) == ((s32) TCameraCtrl__sub_80068958(get_camera_no__11TCameraCtrlFv())))))
  {
    begin_effect_render__13TParticleCtrlFv();
    TCameraCtrl__sub_80069024();
    init_xyz_limits__10TObjPlayerFv();
    TWindowSubStatusDisp__sub_803DEE6C(1);
    set_global_param__8TObjFishFi(lbl_805D63F0);
    temp_r0 = *((s16 *) (((s8 *) arg0) + 0x24));
    {
      switch (temp_r0)
      {
        case 0:
          TWindowEffectLight__sub_802AD1CC(arg0, 0xAA0E);
          break;
        case 1:
          TWindowEffectLight__sub_802AD1CC(arg0, 0xFF2417);
          break;
        case 2:
          TWindowEffectLight__sub_802AD1CC(arg0, 0xFFFFFF);
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

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x26) + 1;
    M2C_FIELD(arg0, s16 *, 0x26) = temp_r4;
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
