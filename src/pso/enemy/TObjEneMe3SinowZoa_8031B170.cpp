#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct RecoveredGlobal_8031B170_lbl_804E8880
{
  M2C_UNK value;
  u8 remaining[0xCC];
};

extern "C" {
extern RecoveredGlobal_8031B170_lbl_804E8880 lbl_804E8880;
extern const f32 lbl_805DF38C;
void TObjEneMe3SinowZoa__sub_8031B170(s32 arg0, f32 farg0);
}

extern "C" {

typedef struct RecoveredGlobal_8031B170_lbl_804E8880 RecoveredGlobal_8031B170_lbl_804E8880;
typedef char RecoveredGlobal_8031B170_lbl_804E8880_size[((sizeof(RecoveredGlobal_8031B170_lbl_804E8880)) == 0xD0) ? (1) : (-1)];
void TObjEneMe3SinowZoa__sub_8031B170(s32 arg0, f32 farg0) {
  u8 *new_var;
  f32 var_f1;
  var_f1 = farg0;
  if (var_f1 < lbl_805DF38C)
  {
    var_f1 = lbl_805DF38C;
  }
  new_var = (u8 *) (&lbl_804E8880.value);
  new_var = new_var + (arg0 * 0x10);
  *((f32 *) (((s8 *) new_var) + 8)) = var_f1;
}

}
