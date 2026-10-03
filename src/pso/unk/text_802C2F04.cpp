#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct RecoveredGlobal_802C2F04_lbl_804717D4
{
  M2C_UNK value;
  u8 remaining[0x60];
};

struct RecoveredGlobal_802C2F04_lbl_804E0988
{
  M2C_UNK value;
  u8 remaining[0x38];
};

extern "C" {
s32 get_bml_motion(void *, s32);
s32 get_bml_model(void *, s32);
s32 TObjPlayer__sub_802C2C48(void *);
u8 *TObjPathObj__ct(void *, s32);
extern RecoveredGlobal_802C2F04_lbl_804717D4 lbl_804717D4;
extern RecoveredGlobal_802C2F04_lbl_804E0988 lbl_804E0988;
extern u8 *lbl_805D6798;
extern const f32 lbl_805DE4F8;
u8 *TObjPlayer__sub_802C2F04(u8 *arg0, s32 arg1);
}

extern "C" {

typedef struct RecoveredGlobal_802C2F04_lbl_804717D4 RecoveredGlobal_802C2F04_lbl_804717D4;
typedef struct RecoveredGlobal_802C2F04_lbl_804E0988 RecoveredGlobal_802C2F04_lbl_804E0988;
u8 *TObjPlayer__sub_802C2F04(u8 *arg0, s32 arg1) {
  s32 var_r0;
  s32 temp_r3;
  TObjPathObj__ct(arg0, arg1);
  *((M2C_UNK **) (((s8 *) arg0) + 0x18)) = &lbl_804E0988.value;
  *((s32 *) (((s8 *) arg0) + 0x98)) = get_bml_model(lbl_805D6798, 0);
  *((s32 *) (((s8 *) arg0) + 0x9C)) = get_bml_motion(lbl_805D6798, 5);
  temp_r3 = *((s32 *) (((s8 *) arg0) + 0x84));
  if (temp_r3 < 0)
  {
    var_r0 = 0;
  }
  else
  {
    var_r0 = 4;
    if (temp_r3 <= 4)
    {
      var_r0 = temp_r3;
    }
  }
  *((s32 *) (((s8 *) arg0) + 0xC8)) = var_r0;
  *((s32 *) (((s8 *) arg0) + 0xA0)) = get_bml_motion(lbl_805D6798, *((M2C_UNK *) (((s8 *) (&lbl_804717D4.value)) + ((*((s32 *) (((s8 *) arg0) + 0xC8))) * 0x14))));
  *((f32 *) (((s8 *) arg0) + 0xA4)) = (f32) lbl_805DE4F8;
  *((f32 *) (((s8 *) arg0) + 0xA8)) = (f32) lbl_805DE4F8;
  TObjPlayer__sub_802C2C48(arg0);
  return arg0;
}

}
