#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802FBA1C_lbl_80474638 { M2C_UNK value; u8 remaining[0x1C]; };
typedef char RecoveredGlobal_802FBA1C_lbl_80474638_size[sizeof(RecoveredGlobal_802FBA1C_lbl_80474638) == 0x20 ? 1 : -1];

struct RecoveredGlobal_802FBA84_lbl_8047460C
{
  M2C_UNK value;
  u8 remaining[0x28];
};

struct RecoveredGlobal_802FBA84_lbl_80474658
{
  M2C_UNK value;
  u8 remaining[0x70];
};

struct RecoveredGlobal_802FBA84_lbl_804746CC
{
  M2C_UNK value;
  u8 remaining[0x6C];
};

extern "C" {
s32 check_damage_reaction__12TBoss8DragonFPv(void *);
extern RecoveredGlobal_802FBA1C_lbl_80474638 lbl_80474638;
void TBoss8Dragon__sub_802FBA1C(u8 *arg0);
s32 TBoss8Dragon__sub_802FBBFC(void *, int);
extern const RecoveredGlobal_802FBA84_lbl_8047460C lbl_8047460C;
extern const RecoveredGlobal_802FBA84_lbl_80474658 lbl_80474658;
extern const RecoveredGlobal_802FBA84_lbl_804746CC lbl_804746CC;
void TBoss8Dragon__sub_802FBA84(u8 *arg0);
}

extern "C" {

void TBoss8Dragon__sub_802FBA1C(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x74C) != 0) {
        TBoss8Dragon__sub_802FBA84((u8 *)(arg0));
        return;
    }
    if (check_damage_reaction__12TBoss8DragonFPv(arg0) == 0) {
        M2C_FIELD(arg0, s32 *, 0x674) = (s32) M2C_FIELD(&lbl_80474638.value, M2C_UNK *, (M2C_FIELD(arg0, s32 *, 0x674) * 4));
        TBoss8Dragon__sub_802FBA84((u8 *)(arg0));
    }
}
typedef struct RecoveredGlobal_802FBA84_lbl_8047460C RecoveredGlobal_802FBA84_lbl_8047460C;
typedef struct RecoveredGlobal_802FBA84_lbl_80474658 RecoveredGlobal_802FBA84_lbl_80474658;
typedef struct RecoveredGlobal_802FBA84_lbl_804746CC RecoveredGlobal_802FBA84_lbl_804746CC;
typedef char RecoveredGlobal_802FBA84_lbl_8047460C_size[((sizeof(RecoveredGlobal_802FBA84_lbl_8047460C)) == 0x2C) ? (1) : (-1)];
typedef char RecoveredGlobal_802FBA84_lbl_80474658_size[((sizeof(RecoveredGlobal_802FBA84_lbl_80474658)) == 0x74) ? (1) : (-1)];
typedef char RecoveredGlobal_802FBA84_lbl_804746CC_size[((sizeof(RecoveredGlobal_802FBA84_lbl_804746CC)) == 0x70) ? (1) : (-1)];
void TBoss8Dragon__sub_802FBA84(u8 *arg0) {
  s32 var_r7;
  M2C_UNK *var_r8;
  s32 temp_r4;
  s32 temp_r5;
  s32 var_r9;
  if ((*((s32 *) (((s8 *) arg0) + 0x3C0))) & 0x40)
  {
    var_r7 = *((s32 *) (((s8 *) arg0) + 0x674));
    var_r8 = (M2C_UNK *) (&lbl_804746CC.value);
  }
  else
  {
    temp_r5 = *((s32 *) (((s8 *) arg0) + 0x674));
    if (temp_r5 < 0x32)
    {
      var_r7 = temp_r5;
      var_r8 = (M2C_UNK *) (&lbl_8047460C.value);
    }
    else
    {
      var_r7 = temp_r5 - 0x32;
      var_r8 = (M2C_UNK *) (&lbl_80474658.value);
    }
  }
  do
  {
    temp_r4 = *((M2C_UNK *) (((s8 *) var_r8) + (var_r7 * 4)));
    var_r9 = 0;
    var_r7 += 1;
    *((s32 *) (((s8 *) arg0) + 0x674)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x674))) + 1);
    switch (temp_r4)
    {
      case 33:
        *((s32 *) (((s8 *) arg0) + 0x674)) = 0;
        var_r9 = 1;
        var_r7 = 0;
        break;
      case 34:
        *((s32 *) (((s8 *) arg0) + 0x674)) = 0x32;
        var_r9 = 1;
        var_r7 = 0;
        break;
    }
  }
  while (var_r9 != 0);
  TBoss8Dragon__sub_802FBBFC((void *) arg0, (int) temp_r4);
}

}
