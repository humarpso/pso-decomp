#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
extern "C" {
s32 TBoss7LaserPtcl__sub_80086C6C(void *, void *, int, int);
void TItemEffShield__sub_8010A460(u8 *arg0);
}

extern "C" {

void *__dt__14TItemEffShieldFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_8049F148[];

void *__dt__14TItemEffShieldFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F148;
        if (M2C_FIELD(arg0, void **, 0x1C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x1C)); M2C_FIELD(arg0, M2C_UNK *, 0x1C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void TItemEffShield__sub_8010A460(u8 *arg0) {
  s32 temp_r5;
  s32 var_r31;
  s32 var_r30;
  var_r30 = 0;
  var_r31 = 0;
  if (temp_r5)
  {
  }
  do
  {
    temp_r5 = *((M2C_UNK *) (((s8 *) (*((s32 *) (((s8 *) arg0) + 0x34)))) + var_r31));
    if (temp_r5 != (-1))
    {
      TBoss7LaserPtcl__sub_80086C6C((void *) (arg0 + 0x1C), (void *) (arg0 + 0x28), (int) temp_r5, (int) 4);
    }
    var_r30 += 1;
    var_r31 += 4;
  }
  while (var_r30 != 8);
}

}
