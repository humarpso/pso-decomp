#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8022FE84_lbl_804CC510
{
  M2C_UNK value;
  u8 remaining[0x48];
};

struct RecoveredGlobal_8022FE84_lbl_804CC55C
{
  const f32 value;
  u8 remaining[0x94];
};

struct RecoveredFields_8022FE84_arg0
{
  u8 unknown_0[0x64];
  f32 field_64;
  u8 unknown_68[0x8];
  f32 field_70;
  u8 unknown_74[0x50];
  s16 field_C4;
  u8 unknown_C6[0x6];
  f32 field_CC;
  f32 field_D0;
  f32 field_D4;
  u8 unknown_D8[0x18];
  s16 field_F0;
};

extern "C" {
s32 TTecCtrl__sub_8022DBC4(int, int, int);
s32 is_technique_ready__8TTecCtrlFv();
s32 TTecAnti__sub_8022B35C(void *, int);
s32 TTecCtrl__sub_8022EF78(int);
extern RecoveredGlobal_8022FE84_lbl_804CC510 lbl_804CC510;
extern RecoveredGlobal_8022FE84_lbl_804CC55C lbl_804CC55C;
void TTecFoie__sub_8022FE84(u8 *arg0);
}

extern "C" {

void TTecFoie__vt4(s32 arg0);
void create__8TTecFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void create_ex__8TTecFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
M2C_UNK TObjEneDellBiter__sub_80087350(s32, M2C_UNK);
void *TTecFoie__ct(void *, void *, void *, void *, void *);
void *TTecFoie__sub_802302A0(void *, void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

typedef struct RecoveredFields_8022FE84_arg0 RecoveredFields_8022FE84_arg0;
typedef struct RecoveredGlobal_8022FE84_lbl_804CC510 RecoveredGlobal_8022FE84_lbl_804CC510;
typedef struct RecoveredGlobal_8022FE84_lbl_804CC55C RecoveredGlobal_8022FE84_lbl_804CC55C;
typedef char RecoveredGlobal_8022FE84_lbl_804CC510_size[((sizeof(RecoveredGlobal_8022FE84_lbl_804CC510)) == 0x4C) ? (1) : (-1)];
typedef char RecoveredGlobal_8022FE84_lbl_804CC55C_size[((sizeof(RecoveredGlobal_8022FE84_lbl_804CC55C)) == 0x98) ? (1) : (-1)];
void TTecFoie__sub_8022FE84(u8 *arg0) {
  s32 new_var;
  new_var = TTecCtrl__sub_8022DBC4((int) 0, (int) ((RecoveredFields_8022FE84_arg0 *) arg0)->field_C4, (int) 0xFFFF);
  TTecAnti__sub_8022B35C((void *) (arg0 + 0xCC), (int) new_var);
  if ((((s16) ((RecoveredFields_8022FE84_arg0 *) arg0)->field_C4) >= 0xF) && (is_technique_ready__8TTecCtrlFv() == 0))
  {
    ((RecoveredFields_8022FE84_arg0 *) arg0)->field_CC = (f32) ((*((s16 *) (((s8 *) (&lbl_804CC510.value)) + 0))) + ((*((s16 *) (((s8 *) (&lbl_804CC510.value)) + 2))) * ((RecoveredFields_8022FE84_arg0 *) arg0)->field_C4));
  }
  else
  {
    ((RecoveredFields_8022FE84_arg0 *) arg0)->field_CC = (f32) (((RecoveredFields_8022FE84_arg0 *) arg0)->field_CC + ((f32) (((RecoveredFields_8022FE84_arg0 *) arg0)->field_F0 * ((RecoveredFields_8022FE84_arg0 *) arg0)->field_C4)));
    if (is_technique_ready__8TTecCtrlFv() != 0)
    {
      ((RecoveredFields_8022FE84_arg0 *) arg0)->field_CC = (f32) (((RecoveredFields_8022FE84_arg0 *) arg0)->field_CC * lbl_804CC55C.value);
    }
  }
  ((RecoveredFields_8022FE84_arg0 *) arg0)->field_64 = (f32) (((RecoveredFields_8022FE84_arg0 *) arg0)->field_D0 + ((f32) TTecCtrl__sub_8022EF78((int) (((RecoveredFields_8022FE84_arg0 *) arg0)->field_C4 - 4))));
  ((RecoveredFields_8022FE84_arg0 *) arg0)->field_70 = (f32) ((RecoveredFields_8022FE84_arg0 *) arg0)->field_D4;
}

void TTecFoie__vt4(s32 arg0) {
    TObjEneDellBiter__sub_80087350(arg0 + 0x20, 0x1DC);
    TObjEneDellBiter__sub_80087350(arg0 + 0x20, 0x1DD);
}

void create_ex__8TTecFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x134);
    if (o != NULL) {
        TTecFoie__sub_802302A0(o, arg0, arg1, arg2, arg3);
    }
}

void create__8TTecFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x134);
    if (o != NULL) {
        TTecFoie__ct(o, arg0, arg1, arg2, arg3);
    }
}

}
