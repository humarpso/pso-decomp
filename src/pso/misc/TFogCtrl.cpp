#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_800FB8A0___vt__8TFogCtrl {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_800FB8A0_TFogCtrl__data_80501188 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
M2C_UNK get_random_float__21TObjEneMe3ShinowaRealFv(f32);
extern f32 TFogCtrl__data_805DA948;
extern const f32 lbl_805DA958;
s32 TFogCtrl__sub_800FB31C(s32 arg0, s32 arg1);
u8 * __dt__7TObjectFv(void *, s16);
void end_effect_render__13TParticleCtrlFv(void);
void __dl__7TObjectFPv(s32);
void fn_803E2070(void);
extern RecoveredGlobal_800FB8A0___vt__8TFogCtrl __vt__8TFogCtrl;
extern RecoveredGlobal_800FB8A0_TFogCtrl__data_80501188 TFogCtrl__data_80501188;
u8 *__dt__8TFogCtrlFv(u8 *arg0, s16 arg1);
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

typedef char RecoveredGlobal_800FB8A0___vt__8TFogCtrl_size[sizeof(RecoveredGlobal_800FB8A0___vt__8TFogCtrl) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_800FB8A0_TFogCtrl__data_80501188_size[sizeof(RecoveredGlobal_800FB8A0_TFogCtrl__data_80501188) == 0x10 ? 1 : -1];
u8 *__dt__8TFogCtrlFv(u8 *arg0, s16 arg1) {
    s32 temp_r0;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__8TFogCtrl.value;
        fn_803E2070();
        end_effect_render__13TParticleCtrlFv();
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C4);
        if ((temp_r0 >= 0) && (temp_r0 < 4)) {
            M2C_FIELD(&TFogCtrl__data_80501188.value, M2C_UNK *, (temp_r0 * 4)) = 0;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

void TFogCtrl__sub_800FBA54(void) {  }

}
