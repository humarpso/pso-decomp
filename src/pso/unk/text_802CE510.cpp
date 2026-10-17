#include "types.h"
#include "pso/object/obj_band.h"
#include "pso/system/vector.h"
#include "pso/TParticleCtrl.h"
#include "pso/player/TObjPlayer.h"

struct Stack_802CE510
{
  s32 sp8;
  f32 spC;
  u8 trailing_storage[0x4];
};

struct RecoveredFields_802CE510_temp_r3
{
  int field_0;
  int field_4;
};

extern "C" {
s32 attach_particle_model(int, int, int, int, int, f32);
u8 *csnVectorUnder(s32 *, s32, s32);
u32 spawn_particle_effect(void *, int);
s32 fn_800D8830(void *, void *);
s32 copy_target_state__14TObjEnePanarmsFPv(void *, int);
s32 play_persistent_sound(void *, void *, void *, int, int);
extern const f32 lbl_805DE6E8;
extern const f32 lbl_805DE6EC;
extern const f32 lbl_805DE6F0;
extern const f32 lbl_805DE6F4;
extern const f32 lbl_805DE6F8;
extern const f32 lbl_805DE6FC;
void fn_802CE510(int arg0);
typedef struct RecoveredFields_802CE510_temp_r3 RecoveredFields_802CE510_temp_r3;
typedef struct Stack_802CE510 Stack_802CE510;
void fn_802CE510(int arg0) {
  Stack_802CE510 stack;
  int temp_r31_2;
  int new_var;
  unsigned int temp_r31;
  unsigned int particle_effect;
  unsigned int temp_r3_3;
  unsigned int temp_r3_4;
  u8 *temp_r3;
  VecCopy((Vec *)(&stack.sp8), (const Vec *)(arg0 + 0x38));
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
      play_persistent_sound((void *) copy_target_state__14TObjEnePanarmsFPv((void *) arg0, (int) 0x3B211), (void *) arg0, (void *) (arg0 + 0x38), (int) 0, (int) 0);
    }
    if (((objInBand((GameObj *)arg0, (f32)((f32) lbl_805DE6EC)) != 0) || (objInBand((GameObj *)((GameObj *)arg0), (f32)((f32) lbl_805DE6E8)) != 0)) || (objInBand((GameObj *)((GameObj *)arg0), (f32)((f32) lbl_805DE6F0)) != 0))
    {
      if (temp_r31 != 0)
      {
        particle_effect = spawn_particle_effect((void *) (((RecoveredFields_802CE510_temp_r3 *) temp_r3)->field_4 + 0x38), (int) 0x49);
        if (particle_effect != 0U)
        {
          ;
          attach_particle_model((int) particle_effect, (int) TParticleCtrl::get_particle_model((int) 2), (int) TParticleCtrl::get_instance(), (int) 0, (int) 1, (f32) lbl_805DE6F4);
          temp_r3 = temp_r3;
          new_var = (int) particle_effect;
          ((TObjPlayer *)new_var)->set_position_xy((f32) lbl_805DE6EC, (f32) lbl_805DE6F4);
        }
        temp_r3_3 = spawn_particle_effect((void *) (((RecoveredFields_802CE510_temp_r3 *) temp_r3)->field_4 + 0x38), (int) 0xA4);
        if (temp_r3_3 != 0U)
        {
          ((TObjPlayer *)temp_r3_3)->set_position_xy((f32) lbl_805DE6EC, (f32) lbl_805DE6F8);
        }
      }
      else
      {
        temp_r3_4 = spawn_particle_effect((void *) (arg0 + 0x38), (int) 0xF3);
        if (temp_r3_4 != 0U)
        {
          ((TObjPlayer *)temp_r3_4)->set_position_xy((f32) lbl_805DE6EC, (f32) lbl_805DE6FC);
        }
      }
    }
  }
}

}
