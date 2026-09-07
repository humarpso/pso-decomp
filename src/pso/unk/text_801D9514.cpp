#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct RecoveredGlobal_801D9514_lbl_804C49F0
{
  M2C_UNK value;
  u8 remaining[0x2C];
};

extern "C" {
s8 TObjPlayer__sub_801AFDBC();
extern RecoveredGlobal_801D9514_lbl_804C49F0 lbl_804C49F0;
u8 TObjPlayer__sub_801D9514(M2C_UNK arg0, s16 arg1);
}

extern "C" {

typedef struct RecoveredGlobal_801D9514_lbl_804C49F0 RecoveredGlobal_801D9514_lbl_804C49F0;
typedef char RecoveredGlobal_801D9514_lbl_804C49F0_size[((sizeof(RecoveredGlobal_801D9514_lbl_804C49F0)) == 0x30) ? (1) : (-1)];
u8 TObjPlayer__sub_801D9514(M2C_UNK arg0, s16 arg1) {
  u8 *new_var;
  new_var = ((u8 *) (&lbl_804C49F0.value)) + (TObjPlayer__sub_801AFDBC() * 4);
  return *((u8 *) (((s8 *) ((*((s32 *) (((s8 *) new_var) + 0))) + arg1)) + 0));
}

}
