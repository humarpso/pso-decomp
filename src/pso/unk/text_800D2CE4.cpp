#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void set_state__15TObjEneMe1GiGueFPvi(void *, s32);
void TObjPlayer__sub_800D306C(u8 *arg0);
s32 obj_clearFlags30(void *, int);
void set_state__15TObjEneMe1GiGueFPvi(void *, s32);
s32 fn_800D2900(void *);
s32 fn_800D2A68(void *);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 TBoss3Volopt__sub_8022675C(void *, void *, int, int);
void TObjPlayer__sub_800D31EC(u8 *arg0);
s32 update_state__15TObjEnemyCustomFPv(void *);
s32 TObjPlayer__sub_800D1E4C(void *);
s32 update__19TObjGyaranzoMissileFPv(void *);
s32 TObjPlayer__sub_800D2CE4(void *);
s32 TObjPlayer__sub_800D2F6C(void *);
s32 TObjPlayer__sub_800D30A8(void *);
s32 TObjPlayer__sub_800D3314(void *);
void TObjPlayer__sub_800D39EC(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_800D35D4(void);

void TObjPlayer__sub_800D306C(u8 *arg0) {
    set_state__15TObjEneMe1GiGueFPvi(arg0, 5);
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 1);
}

void TObjPlayer__sub_800D31EC(u8 *arg0) {
  s32 temp_r0;
  unsigned long var_r3;
  if (((s16) (*((s16 *) (((s8 *) arg0) + 0x326)))) != 4)
  {
    if (((s32) (*((s32 *) (((s8 *) arg0) + 0x3B8)))) <= 0)
    {
      *((s32 *) (((s8 *) arg0) + 0x3B8)) = 0x3C;
      fn_800D2A68((void *) arg0);
    }
    temp_r0 = *((s32 *) (((s8 *) arg0) + 0x3A8));
    var_r3 = 0;
    switch (temp_r0)
    {
      case 0:
        var_r3 = (*((s16 *) (((s8 *) arg0) + 0x32C))) <= (((s16) (*((s16 *) (((s8 *) arg0) + 0x2B8)))) / 3);
        break;
      case 1:
        var_r3 = (*((s16 *) (((s8 *) arg0) + 0x32C))) <= (((s16) (*((s16 *) (((s8 *) arg0) + 0x2B8)))) / 4);
        break;
    }
    if (((s32) var_r3) != 0)
    {
      fn_800D2900((void *) arg0);
    }
    *((s16 *) (((s8 *) arg0) + 0x33E)) = (s16) (*((s16 *) (((s8 *) arg0) + 0x32C)));
    TBoss3Volopt__sub_8022675C((void *) copy_target_state__14TObjEnePanarmsFPvPv((void *) arg0, (int) 0x4003AD0F), (void *) (arg0 + 0x38), (int) 0, (int) 0);
    if (!((*((s32 *) (((s8 *) arg0) + 0x388))) & 0x40000))
    {
      set_state__15TObjEneMe1GiGueFPvi((void *)((void *) arg0), (s32)((int) 4));
      *((s32 *) (((s8 *) arg0) + 0x388)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x388))) | 1);
      return;
    }
    obj_clearFlags30((void *) arg0, (int) 0x200200);
  }
}

void TObjPlayer__sub_800D35D4(void) {  }
void TObjPlayer__sub_800D39EC(u8 *arg0) {
  s16 temp_r0;
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x326));
  {
    switch (temp_r0)
    {
      case 0:
        update_state__15TObjEnemyCustomFPv((void *) arg0);
        return;
      case 1:
        TObjPlayer__sub_800D3314((void *) arg0);
        return;
      case 2:
        TObjPlayer__sub_800D2CE4((void *) arg0);
        return;
      case 4:
        TObjPlayer__sub_800D30A8((void *) arg0);
        return;
      case 5:
        TObjPlayer__sub_800D2F6C((void *) arg0);
        return;
      case 7:
        update__19TObjGyaranzoMissileFPv((void *) arg0);
        return;
      case 9:
        TObjPlayer__sub_800D3314((void *) arg0);
        return;
      case 8:
        TObjPlayer__sub_800D1E4C((void *) arg0);
        break;
    }
  }
}

}
