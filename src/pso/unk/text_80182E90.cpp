#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct VBase_18_26a62c
{
  char pad[0x18];
};

struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct RecoveredFields_80182E90_arg0
{
  u8 unknown_0[0x60];
  s32 field_60;
  u8 unknown_64[0x2C];
  s32 field_90;
  u8 unknown_94[0x8];
  f32 field_9C;
};

extern "C" {
extern const f32 lbl_805DBC0C;
extern const f32 lbl_805DBC10;
extern const f32 lbl_805DBC14;
void fn_80182F2C(u8 *arg0);
M2C_UNK TLobby__sub_801819E4(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470();
extern s32 lbl_805D5B2C;
extern const f32 lbl_805DBC00;
extern const f32 lbl_805DBC04;
extern const f32 lbl_805DBC08;
void fn_80182E90(u8 *arg0);
}

extern "C" {

typedef struct RecoveredFields_80182E90_arg0 RecoveredFields_80182E90_arg0;
typedef struct VBase_18_26a62c VBase_18_26a62c;
typedef struct VObj_18_26a62c VObj_18_26a62c;
#pragma fp_contract on
#define PSO_VCALL_VObj_18_26a62c_m8(_self, _arg0, _arg1) (((VObj_18_26a62c *)(_self))->m8((_arg0), (_arg1)))
void fn_80182E90(u8 *arg0) {
  u8 *new_var2;
  unsigned char new_var;
  new_var = ((s32) ((RecoveredFields_80182E90_arg0 *) arg0)->field_90) != 0;
  if (new_var)
  {
    if (PSO_VCALL_VObj_18_26a62c_m8(arg0, lbl_805DBC04, lbl_805DBC08) == 0)
    {
      ((RecoveredFields_80182E90_arg0 *) arg0)->field_9C = ((RecoveredFields_80182E90_arg0 *) arg0)->field_9C;
      return;
    }
    set_global_param__8TObjFishFi((void *) lbl_805D5B2C);
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    translate_matrix((int) 0, (f32) lbl_805DBC00, (f32) ((RecoveredFields_80182E90_arg0 *) arg0)->field_9C, (f32) lbl_805DBC00);
    new_var2 = arg0;
    rotate_matrix_y((int) 0, (int) ((RecoveredFields_80182E90_arg0 *) new_var2)->field_60);
    TLobby__sub_801819E4((int) 8);
    TObjBoss2Tunnel__sub_803DB470();
    pop_matrix();
  }
}

void fn_80182F2C(u8 *arg0) {
  s32 temp_r0;
  temp_r0 = *((s32 *) (((s8 *) arg0) + 0x90));
  switch (temp_r0)
  {
    case 0:
      *((s32 *) (((s8 *) arg0) + 0x98)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x98))) - 1);
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x98)))) <= 0)
    {
      *((s32 *) (((s8 *) arg0) + 0x98)) = 0x12C;
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x94)))) == 2)
      {
        *((s32 *) (((s8 *) arg0) + 0x90)) = 1;
        *((f32 *) (((s8 *) arg0) + 0x9C)) = (f32) lbl_805DBC0C;
        return;
        return;
      }
      *((s32 *) (((s8 *) arg0) + 0x90)) = 2;
      *((f32 *) (((s8 *) arg0) + 0x9C)) = (f32) lbl_805DBC10;
    }
      return;
    case 1:
      *((f32 *) (((s8 *) arg0) + 0x9C)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x9C))) + lbl_805DBC14);
      if ((*((f32 *) (((s8 *) arg0) + 0x9C))) >= lbl_805DBC10)
    {
      *((s32 *) (((s8 *) arg0) + 0x94)) = 1;
      *((s32 *) (((s8 *) arg0) + 0x90)) = 0;
      return;
    }
      break;
    case 2:
      *((f32 *) (((s8 *) arg0) + 0x9C)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x9C))) - lbl_805DBC14);
      if ((*((f32 *) (((s8 *) arg0) + 0x9C))) <= lbl_805DBC0C)
    {
      *((s32 *) (((s8 *) arg0) + 0x94)) = 2;
      *((s32 *) (((s8 *) arg0) + 0x90)) = 0 * 0;
      return;
    }
      break;
  }
}

}
