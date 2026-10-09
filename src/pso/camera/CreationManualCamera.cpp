#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

#include "pso/camera/CreationCamera.h"
#include "pso/misc/CharacterAppearance.h"
extern "C" {
f32 get_ratio__16TObjCMProportionFv(void),get_right_trigger_ratio__16TObjCMProportionFv(void);
void get_creation_pad_stick(void*,void*);
s32 TObjCMProportion__sub_8029914C(s32);
f32 sin_table_lookup(s32),cos_table_lookup(s32);
extern CharacterAppearanceFields *creation_player_character;
extern s32 creation_camera_mode;
extern const f32 lbl_805DD974,lbl_805DD978,lbl_805DD9B4,lbl_805DD9B8,lbl_805DD9BC,lbl_805DD9C0;
}

extern "C" {

void *TCameraCtrl__vt8(void);
int update_camera__16TObjCMProportionFPv(void* p);
void *TCameraCtrl__sub_80291CBC(void *);
void *__nw__7TObjectFUl(int);
int update_creation_camera_auto(void*);

int update_camera__16TObjCMProportionFPv(void* p) { return update_creation_camera_auto(p); }

#pragma push
#pragma fp_contract on
#pragma opt_common_subs off
void advance_creation_manual_camera(CreationCameraFields *arg0) {
  s32 new_var;
  s32 sp10;
  f32 spC;
  f32 sp8;
  f32 temp_f1;
  f32 temp_f1_2;
  f32 temp_f1_3;
  s32 temp_r0;
  s32 temp_r0_2;
  s32 var_r4;

  if (TObjCMProportion__sub_8029914C(0x10) != 0)
  {
    temp_f1 = arg0->height;
    temp_f1 = temp_f1;
    temp_f1 = temp_f1 + lbl_805DD9B4;
    arg0->height = temp_f1;
    if (temp_f1 > lbl_805DD9B8)
    {
      arg0->height = (f32) lbl_805DD9B8;
    }
  }
  else
    if (TObjCMProportion__sub_8029914C(0x20) != 0)
  {
    temp_f1_2 = arg0->height;
    temp_f1_2 = temp_f1_2;
    temp_f1_2 = temp_f1_2 - lbl_805DD9B4;
    arg0->height = temp_f1_2;
    if (temp_f1_2 < lbl_805DD978)
    {
      arg0->height = (f32) lbl_805DD978;
    }
  }

  get_creation_pad_stick(&sp10, &spC);
  if (lbl_805DD974 != spC)
  {
    arg0->yaw = (s32) (((lbl_805DD9BC * spC) * sin_table_lookup(sp10)) + ((f32) arg0->yaw));
    new_var = (s32) (((lbl_805DD9BC * spC) * cos_table_lookup(sp10)) + ((f32) arg0->pitch));
    var_r4 = -0x2BBC;
    arg0->pitch = new_var;
    if ((((void *) creation_player_character) != 0) && ((((s32) creation_player_character->classId) == 0xA) || (creation_player_character->classFlags & 2)))
    {
      var_r4 = 0;
    }
    temp_r0 = arg0->pitch;
    if (temp_r0 > 0x2BBC)
    {
      arg0->pitch = 0x2BBC;
    }
    else
      if (temp_r0 < var_r4)
    {
      arg0->pitch = var_r4;
    }
  }
  else
    if (TObjCMProportion__sub_8029914C(0x80) != 0)
  {
    arg0->yaw = (s32) (arg0->yaw + 0x444);
  }
  else
    if (TObjCMProportion__sub_8029914C(0x40) != 0)
  {
    arg0->yaw = (s32) (arg0->yaw - 0x444);
  }
  arg0->distance = (f32) (arg0->distance + get_right_trigger_ratio__16TObjCMProportionFv());
  arg0->distance = (f32) (arg0->distance - get_ratio__16TObjCMProportionFv());
  temp_f1_3 = arg0->distance;
  if (temp_f1_3 > lbl_805DD9C0)
  {
    arg0->distance = (f32) lbl_805DD9C0;
  }
  else
    if (temp_f1_3 < lbl_805DD9B8)
  {
    arg0->distance = (f32) lbl_805DD9B8;
  }
  get_creation_pad_stick(0, &sp8);
  if ((sp8 > lbl_805DD974) || (TObjCMProportion__sub_8029914C(0x300F0) != 0))
  {
    arg0->ticks = 0;
    return;
  }
  temp_r0_2 = arg0->ticks + 1;
  arg0->ticks = temp_r0_2;
  if (temp_r0_2 > 0x96)
  {
    creation_camera_mode = 3;
  }
}
#pragma pop

void *TCameraCtrl__vt8(void) {
    void *o = __nw__7TObjectFUl(0x90);
    if (o != NULL) {
        o = TCameraCtrl__sub_80291CBC(o);
    }
    return o;
}

}
