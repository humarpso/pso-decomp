#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
extern "C" {
M2C_UNK get_random_float__21TObjEneMe3ShinowaRealFv(f32);
extern f32 TFogCtrl__data_805DA948;
extern const f32 lbl_805DA958;
s32 TFogCtrl__sub_800FB31C(s32 arg0, s32 arg1);
}

extern "C" {

void TFogCtrl__sub_800FBA54(void);
s32 get_param__8TFogCtrlFPv(void* p);
void render__8TFogCtrlFv(void);

s32 get_param__8TFogCtrlFPv(void* p) { return *(s32*)((char*)p + 0x1c0); }

s32 TFogCtrl__sub_800FB31C(s32 arg0, s32 arg1) {
  f32 temp_f31;
  f32 var_f31;
  s32 temp_r3;
  u8 *temp_r31;
  temp_r3 = arg0 + (arg1 * 4);
  temp_r31 = (u8 *) (*((u8 **) (((s8 *) temp_r3) + 0x174)));
  temp_r3 = *((s32 *) (((s8 *) temp_r31) + 0));
  if (temp_r3 & 2)
  {
    if (((TFogCtrl__data_805DA948 != (*((f32 *) (((s8 *) temp_r31) + 0x20)))) || (TFogCtrl__data_805DA948 != (*((f32 *) (((s8 *) temp_r31) + 0x28))))) || (((u8) (*((u8 *) (((s8 *) temp_r31) + 0x3E)))) != 0))
    {
      return 1;
    }
    return 0;
  }
  if (temp_r3 & 4)
  {
    temp_f31 = *((f32 *) (((s8 *) temp_r31) + 0x44));
    get_random_float__21TObjEneMe3ShinowaRealFv((f32) temp_f31);
    var_f31 = temp_f31 + (*((f32 *) (((s8 *) temp_r31) + 0x18)));
    get_random_float__21TObjEneMe3ShinowaRealFv((f32) var_f31);
    if (var_f31 < TFogCtrl__data_805DA948)
    {
      var_f31 += lbl_805DA958;
    }
    else
      if (var_f31 >= lbl_805DA958)
    {
      var_f31 -= lbl_805DA958;
    }
    *((f32 *) (((s8 *) temp_r31) + 0x44)) = var_f31;
    return 1;
  }
  return 0;
}

void render__8TFogCtrlFv(void) {  }

void TFogCtrl__sub_800FBA54(void) {  }

}
