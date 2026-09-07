#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct RecoveredGlobal_802C27FC_lbl_80471848
{
  M2C_UNK value;
  u8 remaining[0x44];
};

struct RecoveredGlobal_802C27FC_lbl_804E094C
{
  M2C_UNK value;
  u8 remaining[0x38];
};

extern "C" {
s32 TObjFish__sub_8001ED9C(void *, s32);
s32 TObjFish__sub_8001EDC4(void *, s32);
s32 TObjPlayer__sub_802C2548(void *);
u8 *TObjPathObj__ct(void *, s32);
extern RecoveredGlobal_802C27FC_lbl_80471848 lbl_80471848;
extern RecoveredGlobal_802C27FC_lbl_804E094C lbl_804E094C;
extern u8 *lbl_805D67A0;
extern const f32 lbl_805DE4F8;
u8 *TObjPlayer__sub_802C27FC(u8 *arg0, s32 arg1);
}

extern "C" {

typedef struct RecoveredGlobal_802C27FC_lbl_80471848 RecoveredGlobal_802C27FC_lbl_80471848;
typedef struct RecoveredGlobal_802C27FC_lbl_804E094C RecoveredGlobal_802C27FC_lbl_804E094C;
u8 *TObjPlayer__sub_802C27FC(u8 *arg0, s32 arg1) {
  s32 var_r0;
  s32 temp_r3;
  TObjPathObj__ct(arg0, arg1);
  *((M2C_UNK **) (((s8 *) arg0) + 0x18)) = &lbl_804E094C.value;
  *((s32 *) (((s8 *) arg0) + 0x98)) = TObjFish__sub_8001EDC4(lbl_805D67A0, 0);
  *((s32 *) (((s8 *) arg0) + 0x9C)) = TObjFish__sub_8001ED9C(lbl_805D67A0, 0);
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
  *((s32 *) (((s8 *) arg0) + 0xA0)) = TObjFish__sub_8001ED9C(lbl_805D67A0, *((M2C_UNK *) (((s8 *) (&lbl_80471848.value)) + ((*((s32 *) (((s8 *) arg0) + 0xC8))) * 0x18))));
  *((f32 *) (((s8 *) arg0) + 0xA4)) = (f32) lbl_805DE4F8;
  *((f32 *) (((s8 *) arg0) + 0xA8)) = (f32) lbl_805DE4F8;
  TObjPlayer__sub_802C2548(arg0);
  return arg0;
}

}
