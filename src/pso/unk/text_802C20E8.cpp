#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct RecoveredGlobal_802C20E8_lbl_80471890
{
  M2C_UNK value;
  u8 remaining[0x38];
};

struct RecoveredGlobal_802C20E8_lbl_804E0910
{
  M2C_UNK value;
  u8 remaining[0x38];
};

extern "C" {
s32 TObjFish__sub_8001ED9C(void *, s32);
s32 TObjFish__sub_8001EDC4(void *, s32);
s32 TObjPlayer__sub_802C1E34(void *);
u8 *TObjPathObj__ct(void *, s32);
extern RecoveredGlobal_802C20E8_lbl_80471890 lbl_80471890;
extern RecoveredGlobal_802C20E8_lbl_804E0910 lbl_804E0910;
extern u8 *lbl_805D67A8;
extern const f32 lbl_805DE4F8;
u8 *TObjPlayer__sub_802C20E8(u8 *arg0, s32 arg1);
}

extern "C" {

typedef struct RecoveredGlobal_802C20E8_lbl_80471890 RecoveredGlobal_802C20E8_lbl_80471890;
typedef struct RecoveredGlobal_802C20E8_lbl_804E0910 RecoveredGlobal_802C20E8_lbl_804E0910;
u8 *TObjPlayer__sub_802C20E8(u8 *arg0, s32 arg1) {
  s32 var_r0;
  s32 temp_r3;
  TObjPathObj__ct(arg0, arg1);
  *((M2C_UNK **) (((s8 *) arg0) + 0x18)) = &lbl_804E0910.value;
  *((s32 *) (((s8 *) arg0) + 0x98)) = TObjFish__sub_8001EDC4(lbl_805D67A8, 0);
  *((s32 *) (((s8 *) arg0) + 0x9C)) = TObjFish__sub_8001ED9C(lbl_805D67A8, 0);
  temp_r3 = *((s32 *) (((s8 *) arg0) + 0x84));
  if (temp_r3 < 0)
  {
    var_r0 = 0;
  }
  else
  {
    var_r0 = 2;
    if (temp_r3 <= 2)
    {
      var_r0 = temp_r3;
    }
  }
  *((s32 *) (((s8 *) arg0) + 0xC8)) = var_r0;
  *((s32 *) (((s8 *) arg0) + 0xA0)) = TObjFish__sub_8001ED9C(lbl_805D67A8, *((M2C_UNK *) (((s8 *) (&lbl_80471890.value)) + ((*((s32 *) (((s8 *) arg0) + 0xC8))) * 0x14))));
  *((f32 *) (((s8 *) arg0) + 0xA4)) = (f32) lbl_805DE4F8;
  *((f32 *) (((s8 *) arg0) + 0xA8)) = (f32) lbl_805DE4F8;
  TObjPlayer__sub_802C1E34(arg0);
  return arg0;
}

}
