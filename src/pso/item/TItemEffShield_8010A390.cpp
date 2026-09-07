#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8010A404_lbl_8049F148 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8010A5E0___vt__14TItemEffShield {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
s32 TBoss7LaserPtcl__sub_80086C6C(void *, void *, int, int);
void TItemEffShield__sub_8010A460(u8 *arg0);
s32 get_item_ctrl__10TObjPlayerFv(void);
void __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK lbl_8049F148[];
u8 *TItemEffShield__sub_8010A404(u8 *arg0, u8 *arg1, s16 arg2);
void disallow_rendering__7TObjectFv(void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8010A5E0___vt__14TItemEffShield __vt__14TItemEffShield;
extern s32 lbl_805D2BD8;
u8 *__ct__14TItemEffShieldFv(u8 *arg0, u8 *arg1, s16 arg2, s32 arg3);
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

typedef char RecoveredGlobal_8010A404_lbl_8049F148_size[sizeof(RecoveredGlobal_8010A404_lbl_8049F148) == 0x18 ? 1 : -1];
u8 *TItemEffShield__sub_8010A404(u8 *arg0, u8 *arg1, s16 arg2) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8010A404_lbl_8049F148 *)&lbl_8049F148).value;
    M2C_FIELD(arg0, s16 *, 0x24) = arg2;
    M2C_FIELD(arg0, s32 *, 0x20) = -1;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = get_item_ctrl__10TObjPlayerFv();
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
typedef char RecoveredGlobal_8010A5E0___vt__14TItemEffShield_size[sizeof(RecoveredGlobal_8010A5E0___vt__14TItemEffShield) == 0x18 ? 1 : -1];
u8 *__ct__14TItemEffShieldFv(u8 *arg0, u8 *arg1, s16 arg2, s32 arg3) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__14TItemEffShield.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2BD8;
    M2C_FIELD(arg0, s32 *, 0x34) = arg3;
    M2C_FIELD(arg0, s16 *, 0x44) = arg2;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0x24;
    disallow_rendering__7TObjectFv(arg0);
    return arg0;
}

}
