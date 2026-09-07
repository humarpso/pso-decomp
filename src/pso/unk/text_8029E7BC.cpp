#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct Stack_8029E7BC
{
  M2C_UNK sp8;
  f32 spC;
  u8 trailing_storage[0x4];
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u8 *TBoss8Dragon__sub_8007A544(M2C_UNK *, s32);
s32 get_global_state__14TOKeyMachine01Fv();
extern const f32 lbl_805DDD88;
s32 fn_8029E7BC(s32 arg0, u8 *arg1);
}

extern "C" {

typedef struct Stack_8029E7BC Stack_8029E7BC;
s32 fn_8029E7BC(s32 arg0, u8 *arg1) {
  Stack_8029E7BC stack;
  s32 new_var;
  s32 var_r31;
  u8 *temp_r3;
  u8 *temp_r4;
  new_var = get_global_state__14TOKeyMachine01Fv();
  var_r31 = 0x56EF;
  if (new_var == 0x20)
  {
    var_r31 = 0x4000;
  }
  VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) arg0);
  stack.spC += lbl_805DDD88;
  temp_r3 = (u8 *) TBoss8Dragon__sub_8007A544(&stack.sp8, var_r31);
  if (temp_r3 != 0)
  {
    temp_r4 = (u8 *) (*((u8 **) (((s8 *) temp_r3) + 4)));
    if (!((*((s32 *) (((s8 *) temp_r4) + 0x18))) & 0x4000))
    {
      return 0;
    }
    if (arg1 != 0)
    {
      *((f32 *) (((s8 *) arg1) + 0)) = (f32) (*((f32 *) (((s8 *) temp_r4) + 0)));
      *((f32 *) (((s8 *) arg1) + 4)) = (f32) (*((f32 *) (((s8 *) (*((u8 **) (((s8 *) temp_r3) + 4)))) + 4)));
      *((f32 *) (((s8 *) arg1) + 8)) = (f32) (*((f32 *) (((s8 *) (*((u8 **) (((s8 *) temp_r3) + 4)))) + 8)));
      *((f32 *) (((s8 *) arg1) + 0xC)) = (f32) (*((f32 *) (((s8 *) (*((u8 **) (((s8 *) temp_r3) + 4)))) + 0xC)));
      *((f32 *) (((s8 *) arg1) + 0x10)) = (f32) (*((f32 *) (((s8 *) (*((u8 **) (((s8 *) temp_r3) + 4)))) + 0x10)));
      *((f32 *) (((s8 *) arg1) + 0x14)) = (f32) (*((f32 *) (((s8 *) (*((u8 **) (((s8 *) temp_r3) + 4)))) + 0x14)));
    }
    return 1;
  }
  return 0;
}

}
