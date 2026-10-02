#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct Stack_802CE510
{
  M2C_UNK sp8;
  f32 spC;
  u8 trailing_storage[0x4];
};

struct RecoveredFields_802CE510_temp_r3
{
  int field_0;
  int field_4;
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TObjFish__sub_800660D4(int, int, int, int, int, f32);
u8 *csnVectorUnder(M2C_UNK *, s32, s32);
s32 set_position_xy__10TObjPlayerFPvff(int, f32, f32);
s32 TParticleCtrl__sub_80086884(int);
s32 get_instance__13TParticleCtrlFv();
u32 spawn_particle_effect(void *, int);
s32 fn_800D8830(void *, void *);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 objInBand__FP7GameObjf(void *, f32);
s32 TOTrapAncient01__sub_80226578(void *, void *, void *, int, int);
extern const f32 lbl_805DE6E8;
extern const f32 lbl_805DE6EC;
extern const f32 lbl_805DE6F0;
extern const f32 lbl_805DE6F4;
extern const f32 lbl_805DE6F8;
extern const f32 lbl_805DE6FC;
void fn_802CE510(int arg0);
}

extern "C" {

typedef struct RecoveredFields_802CE510_temp_r3 RecoveredFields_802CE510_temp_r3;
typedef struct Stack_802CE510 Stack_802CE510;
void fn_802CE510(int arg0) {
  Stack_802CE510 stack;
  int temp_r31_2;
  int new_var;
  unsigned int temp_r31;
  unsigned int temp_r3_2;
  unsigned int temp_r3_3;
  unsigned int temp_r3_4;
  u8 *temp_r3;
  VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x38));
  stack.spC += lbl_805DE6E8;
  temp_r3 = (u8 *) csnVectorUnder(&stack.sp8, arg0 + 0x120, 0x15);
  if (temp_r3 != 0)
  {
    temp_r31 = ((RecoveredFields_802CE510_temp_r3 *) temp_r3)->field_0 & 4;
    if (temp_r31 != 0)
    {
      fn_800D8830((void *) arg0, (void *) (arg0 + 0x38));
    }
    else
    {
      TOTrapAncient01__sub_80226578((void *) copy_target_state__14TObjEnePanarmsFPvPv((void *) arg0, (int) 0x3B211), (void *) arg0, (void *) (arg0 + 0x38), (int) 0, (int) 0);
    }
    if (((objInBand__FP7GameObjf((void *) arg0, (f32) lbl_805DE6EC) != 0) || (objInBand__FP7GameObjf((void *) arg0, (f32) lbl_805DE6E8) != 0)) || (objInBand__FP7GameObjf((void *) arg0, (f32) lbl_805DE6F0) != 0))
    {
      if (temp_r31 != 0)
      {
        temp_r3_2 = spawn_particle_effect((void *) (((RecoveredFields_802CE510_temp_r3 *) temp_r3)->field_4 + 0x38), (int) 0x49);
        if (temp_r3_2 != 0U)
        {
          ;
          TObjFish__sub_800660D4((int) temp_r3_2, (int) TParticleCtrl__sub_80086884((int) 2), (int) get_instance__13TParticleCtrlFv(), (int) 0, (int) 1, (f32) lbl_805DE6F4);
          temp_r3 = temp_r3;
          new_var = (int) temp_r3_2;
          set_position_xy__10TObjPlayerFPvff(new_var, (f32) lbl_805DE6EC, (f32) lbl_805DE6F4);
        }
        temp_r3_3 = spawn_particle_effect((void *) (((RecoveredFields_802CE510_temp_r3 *) temp_r3)->field_4 + 0x38), (int) 0xA4);
        if (temp_r3_3 != 0U)
        {
          set_position_xy__10TObjPlayerFPvff((int) temp_r3_3, (f32) lbl_805DE6EC, (f32) lbl_805DE6F8);
        }
      }
      else
      {
        temp_r3_4 = spawn_particle_effect((void *) (arg0 + 0x38), (int) 0xF3);
        if (temp_r3_4 != 0U)
        {
          set_position_xy__10TObjPlayerFPvff((int) temp_r3_4, (f32) lbl_805DE6EC, (f32) lbl_805DE6FC);
        }
      }
    }
  }
}

}
