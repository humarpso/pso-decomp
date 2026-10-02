#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Boss_802FB94C { u8 pad[0x6D0]; s32 n; };
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
extern const f32 TBoss8Dragon__data_805DED90;
f32 TBoss8Dragon__sub_802FB94C(Boss_802FB94C *o);
}

extern "C" {

int TBoss8Dragon__sub_802FB984(void);
s32 check_damage_reaction__12TBoss8DragonFPv(void *arg0);
s32 TBoss8Dragon__sub_802FBBFC(void * a0 = 0, s32 a1 = 0);
s32 set_damage_phase_value__12TBoss8DragonFPvi(void * a0 = 0, s32 a1 = 0);

void copy_pos_to_field688__12TBoss8DragonFPv(void* p);
void set_speed__12TBoss8DragonFPvi(u8 *arg0, s32 arg1);

}

extern "C" {
s32 check_damage_reaction__12TBoss8DragonFPv(void *);
extern RecoveredGlobal_802FBA1C_lbl_80474638 lbl_80474638;
void TBoss8Dragon__sub_802FBA1C(u8 *arg0);
extern const RecoveredGlobal_802FBA84_lbl_8047460C lbl_8047460C;
extern const RecoveredGlobal_802FBA84_lbl_80474658 lbl_80474658;
extern const RecoveredGlobal_802FBA84_lbl_804746CC lbl_804746CC;
void TBoss8Dragon__sub_802FBA84(u8 *arg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
f32 TBoss8Dragon__sub_802FB94C(Boss_802FB94C *o) {
    return TBoss8Dragon__data_805DED90 * (f32)o->n + TBoss8Dragon__data_805DED90;
}
#pragma pop

int TBoss8Dragon__sub_802FB984(void) { return 0; }
s32 check_damage_reaction__12TBoss8DragonFPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x3C0) & 0x40) {
        return 0;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x32C) <= (s16) M2C_FIELD(arg0, s16 *, 0x67A)) {
        M2C_FIELD(arg0, s16 *, 0x32C) = M2C_FIELD(arg0, s16 *, 0x67A);
        set_damage_phase_value__12TBoss8DragonFPvi(arg0, 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3E4) == 0) {
            TBoss8Dragon__sub_802FBBFC(arg0, 0xD);
            return 1;
        }
        TBoss8Dragon__sub_802FBBFC(arg0, 0xB);
        return 1;
    }
    return 0;
}

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

void copy_pos_to_field688__12TBoss8DragonFPv(void* p) { *(f32*)((char*)p + 0x688) = *(f32*)((char*)p + 0x38); *(f32*)((char*)p + 0x68c) = *(f32*)((char*)p + 0x40); }

extern M2C_UNK TBoss8Dragon__data_80474B10;
extern const f32 TBoss8Dragon__data_805DED50;

void set_speed__12TBoss8DragonFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, f32 *, 0x688) = (f32) arg1;
    M2C_FIELD(arg0, f32 *, 0x68C) = (f32) TBoss8Dragon__data_805DED50;
}

}
