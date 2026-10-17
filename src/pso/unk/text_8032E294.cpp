#include "types.h"
#include "pso/system/vector.h"
#include "pso/item/TUnk_804EDD44.h"

struct Eff_8032E34C {
    u8 pad0[0x18];
    void *vt;
    u8 pad1C[0x28 - 0x1C];
    s32 f28;
    s32 f2C;
    u8 pad30[4];
    u16 f34;
    u8 pad36[2];
    u8 f38[0x50 - 0x38];
    s32 f50;
    u8 pad54[4];
    s32 f58;
    u8 pad5C[4];
    s32 f60;
    u8 f64[0xC];
};

extern "C" {
void anchor_card_effect(u8 *arg0);
s32 normalize_vector(int, int);
extern s32 lbl_805D4218;
extern const f32 lbl_805DF7E0;
f32 atan2_float(f32, f32);
extern const f64 lbl_804773A8[];
#pragma fp_contract on
void TUnk_804EDD44::sub_8032E294() {
  f32 var_f0;
  f32 var_f1;
  s32 var_r4;
  u8 *var_r31;
  s32 *new_var;
  u8 *var_r3;
  var_r31 = (u8 *) ((u8 *)this);
  new_var = &(*((s32 *) (((s8 *) var_r31) + 0x2C)));
  var_r4 = lbl_805D4218;
  *((s32 *) (((s8 *) ((u8 *)this)) + 0)) = var_r4;
  var_r3 = (u8 *) (var_r31 + 0x38);
  *((s32 *) (((s8 *) var_r31) + 0x30)) = 0;
  *((s32 *) (((s8 *) var_r31) + 0x1C)) = 0;
  *((s32 *) (((s8 *) var_r31) + 0x20)) = 0;
  *((s32 *) (((s8 *) var_r31) + 0x24)) = 0;
  *((s32 *) (((s8 *) var_r31) + 0x54)) = 0;
  *((s32 *) (((s8 *) var_r31) + 0x5C)) = 0;
  normalize_vector((int) var_r3, (int) var_r4);
  if (((u16) (*((u16 *) (((s8 *) var_r31) + 0x34)))) != ((-1U) & 0xFFFFu))
  {
    var_r3 = (u8 *) (*((u8 **) (((s8 *) var_r31) + 0x28)));
    var_f0 = *((f32 *) (((s8 *) var_r31) + 0x38));
    var_r3 = (u8 *) (*((u8 **) (((s8 *) var_r3) + 0xA4)));
    var_r3 += (*new_var) * 0x2C;
    var_f1 = *((f32 *) (((s8 *) var_r3) + 0xC));
    var_f0 *= var_f1;
    *((f32 *) (((s8 *) var_r31) + 0x44)) = var_f0;
    var_f0 = *((f32 *) (((s8 *) var_r31) + 0x3C));
    var_f0 *= var_f1;
    *((f32 *) (((s8 *) var_r31) + 0x48)) = var_f0;
    var_f0 = *((f32 *) (((s8 *) var_r31) + 0x40));
    var_f0 *= var_f1;
    *((f32 *) (((s8 *) var_r31) + 0x4C)) = var_f0;
  }
  else
  {
    var_f0 = lbl_805DF7E0;
    *((f32 *) (((s8 *) var_r31) + 0x44)) = var_f0;
    *((f32 *) (((s8 *) var_r31) + 0x48)) = var_f0;
    *((f32 *) (((s8 *) var_r31) + 0x4C)) = var_f0;
  }
  var_r3 = (u8 *) var_r31;
  anchor_card_effect(var_r3);
}
}
TUnk_804EDD44::TUnk_804EDD44(TObject *parent, f32 *arg2, f32 *arg3, s32 arg4, s32 arg5) : TObject(parent) {
    ((Eff_8032E34C *)this)->f28 = 0;
    ((Eff_8032E34C *)this)->f2C = 0;
    ((Eff_8032E34C *)this)->f34 = 0xFFFF;
    ((Eff_8032E34C *)this)->f60 = arg5;
    VecCopy((Vec *)(((Eff_8032E34C *)this)->f38), (const Vec *)arg3);
    VecCopy((Vec *)(((Eff_8032E34C *)this)->f64), (const Vec *)arg2);
    ((Eff_8032E34C *)this)->f58 = (s32)(lbl_804773A8[0] * atan2_float(arg3[0], arg3[2]));
    ((Eff_8032E34C *)this)->f50 = arg4;
    ((TUnk_804EDD44 *)((Eff_8032E34C *)this))->sub_8032E294();
}
