#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct RecoveredGlobal_8023C558_lbl_804CC510
{
  M2C_UNK value;
  u8 remaining[0x48];
};

struct RecoveredGlobal_8023C558_lbl_804CC55C
{
  M2C_UNK value;
  u8 remaining[0x94];
};

struct RecoveredFields_8023C558_arg0
{
  u8 unknown_0[0xC4];
  s16 field_C4;
  u8 unknown_C6[0x6];
  f32 field_CC;
  u8 unknown_D0[0x20];
  s16 field_F0;
};

extern "C" {
s32 TTecCtrl__sub_8022DBC4(int, int, int);
s32 is_technique_ready__8TTecCtrlFv();
s32 TTecAnti__sub_8022B35C(void *, int);
extern RecoveredGlobal_8023C558_lbl_804CC510 lbl_804CC510;
extern RecoveredGlobal_8023C558_lbl_804CC55C lbl_804CC55C;
void fn_8023C558(u8 *arg0);
}

extern "C" {

typedef struct RecoveredFields_8023C558_arg0 RecoveredFields_8023C558_arg0;
typedef struct RecoveredGlobal_8023C558_lbl_804CC510 RecoveredGlobal_8023C558_lbl_804CC510;
typedef struct RecoveredGlobal_8023C558_lbl_804CC55C RecoveredGlobal_8023C558_lbl_804CC55C;
typedef char RecoveredGlobal_8023C558_lbl_804CC510_size[((sizeof(RecoveredGlobal_8023C558_lbl_804CC510)) == 0x4C) ? (1) : (-1)];
typedef char RecoveredGlobal_8023C558_lbl_804CC55C_size[((sizeof(RecoveredGlobal_8023C558_lbl_804CC55C)) == 0x98) ? (1) : (-1)];
void fn_8023C558(u8 *arg0) {
  s32 new_var;
  new_var = TTecCtrl__sub_8022DBC4((int) 6, (int) ((RecoveredFields_8023C558_arg0 *) arg0)->field_C4, (int) 0xFFFF);
  TTecAnti__sub_8022B35C((void *) (arg0 + 0xCC), (int) new_var);
  if ((((s16) ((RecoveredFields_8023C558_arg0 *) arg0)->field_C4) >= 0xF) && (is_technique_ready__8TTecCtrlFv() == 0))
  {
    ((RecoveredFields_8023C558_arg0 *) arg0)->field_CC = (f32) ((*((s16 *) (((s8 *) (&lbl_804CC510.value)) + 0x18))) + ((*((s16 *) (((s8 *) (&lbl_804CC510.value)) + 0x1A))) * ((RecoveredFields_8023C558_arg0 *) arg0)->field_C4));
    return;
  }
  ((RecoveredFields_8023C558_arg0 *) arg0)->field_CC = (f32) (((RecoveredFields_8023C558_arg0 *) arg0)->field_CC + ((f32) (((RecoveredFields_8023C558_arg0 *) arg0)->field_F0 * ((RecoveredFields_8023C558_arg0 *) arg0)->field_C4)));
  if (is_technique_ready__8TTecCtrlFv())
  {
    ((RecoveredFields_8023C558_arg0 *) arg0)->field_CC = (f32) (((RecoveredFields_8023C558_arg0 *) arg0)->field_CC * (*((f32 *) (((s8 *) (&lbl_804CC55C.value)) + 0x30))));
  }
}

}
