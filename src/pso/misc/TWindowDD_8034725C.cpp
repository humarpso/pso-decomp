#include "pso/misc/TWindowDD.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TWindowDD__sub_80348688(s32, void *);
void TWindowDD__sub_8034886C(s32, s32, void *);
void TWindowDD__sub_8034740C(u8 *arg0, s32 arg1, s32 arg2);
s32 TWindowDD__sub_80347EF4(u8 *arg0);
M2C_UNK TWindowDD__sub_803474CC(int, int, int, int, int);
s32 TWindowDD__sub_80348B70(s32);
void TWindowDD__sub_80347474(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 TWindowDD__sub_80342158(void *);
s32 is_state_zero_unless_0x2C8__9TWindowDDFs(s32 arg0);
s32 TWindowDD__sub_80347CC8(void *, void *);
s32 TWindowDD__sub_80347FA0(void *, int);
s32 TWindowDD__sub_80348DD8(void *, int);
void TWindowDD__sub_80347A4C(u8 *arg0, s32 arg1);
}

extern "C" {

s32 classify_id__9TWindowDDFs(s16 arg0);
s32 get_player_battle_flag_state__9TWindowDDFUs(u16 arg0);
s32 is_state_zero_unless_0x2C8__9TWindowDDFs(s32 arg0);
s32 setup_entry__9TWindowDDFPvi(void *arg0, s32 arg1);
void *TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK TWindowDD__sub_803412A0(u32);
M2C_UNK TWindowDD__sub_803412F0(u32, s32);
s32 TWindowDD__sub_80347204(s16);
s32 TWindowDD__sub_80347238();
s32 TWindowDD__sub_80347858();
s32 TWindowDD__sub_80348B70(s32);
M2C_UNK init_and_set_field50__9TWindowDDFPvPv(u32, s32);

s32 classify_id__9TWindowDDFs(s16 arg0) {
    s32 var_r3;

    if (arg0 == 0x2E4) {
        return 0;
    }
    if (TWindowDD__sub_80347238() != 0) {
        return 1;
    }
    if (TWindowDD__sub_80347204(arg0) != 0) {
        return 2;
    }
    if (arg0 == 0x4F3) {
        return 3;
    }
    if (arg0 == 0x635) {
        return 4;
    }
    var_r3 = 7;
    if (arg0 == 0x650) {
        var_r3 = 5;
    }
    return var_r3;
}

s32 get_player_battle_flag_state__9TWindowDDFUs(u16 arg0) {
    s32 temp_r3_2;
    void *temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((u16) arg0);
    if (temp_r3 != NULL) {
        temp_r3_2 = M2C_FIELD(temp_r3, s32 *, 0x890);
        if (temp_r3_2 & 1) {
            return 0;
        }
        if (temp_r3_2 & 2) {
            return 2;
        }
        goto block_5;
    }
block_5:
    return 0;
}

void TWindowDD__sub_8034740C(u8 *arg0, s32 arg1, s32 arg2) {
    TWindowDD__sub_80347474((s32)((s32) arg0), (s32)((s32) M2C_FIELD(arg0, s16 *, 4)), (s32)(arg1), (s32)(arg2));
    if ((s16) M2C_FIELD(arg0, s16 *, 0) > 1) {
        TWindowDD__sub_80348688(arg1, (void *) arg2);
        TWindowDD__sub_8034886C((s32) M2C_FIELD(arg0, s16 *, 6), arg1, (void *) arg2);
    }
}

void TWindowDD__sub_80347474(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
  s32 temp_r0;
  s32 var_r28;
  s32 var_r29;
  s32 var_r30;
  s32 var_r31;
  int var_r3;
  s32 var_r4;
  s32 var_r5;
  s32 var_r6;
  s32 var_r7;
  var_r29 = arg1;
  var_r28 = arg0;
  var_r30 = arg2;
  var_r31 = arg3;
  var_r3 = var_r29;
  var_r6 = TWindowDD__sub_80348B70((s32)((int) var_r3));
  temp_r0 = var_r6;
  var_r3 = var_r28;
  var_r5 = temp_r0;
  var_r4 = var_r29;
  var_r6 = var_r30;
  var_r7 = var_r31;
  var_r30 = (int) var_r4;
  TWindowDD__sub_803474CC((int) var_r3, var_r30, (int) var_r5, (int) var_r6, (int) var_r7);
}

s32 is_state_zero_unless_0x2C8__9TWindowDDFs(s32 arg0) {
    if ((s16)arg0 == 0x2C8) {
        return 0;
    }
    return (u32) __cntlzw((u32) TWindowDD__sub_80347858()) >> 5;
}

extern s32 TWindowDD__data_805DFB50;

s32 TWindowDD_is_id_in_range_5AC_5F9(s16 arg0) {
    u8 var_r3;
    var_r3 = 0;
    if ((arg0 >= 0x5ac) && (arg0 <= 0x5f9)) {
        var_r3 = 1;
    }
    return var_r3;
}

void TWindowDD__sub_80347A4C(u8 *arg0, s32 arg1) {
    s32 temp_r3;
    temp_r3 = TWindowDD__sub_80342158((void *) (arg1));
    if (is_state_zero_unless_0x2C8__9TWindowDDFs(temp_r3) != 0) {
        TWindowDD__sub_80348DD8((void *) (arg0 + 0xC4), (int) (temp_r3));
        TWindowDD__sub_80347CC8((void *) (arg0), (void *) (arg0 + 0xC4));
        M2C_FIELD(arg0, s32 *, 0x98) = 1;
        M2C_FIELD(arg0, s32 *, 0x9C) = (s32) (s16) temp_r3;
        return;
    }
    TWindowDD__sub_80347FA0((void *) (arg0), (int) (3));
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
    M2C_FIELD(arg0, s32 *, 0x9C) = (s32) (s16) temp_r3;
}

s32 setup_entry__9TWindowDDFPvi(void *arg0, s32 arg1) {
    s32 var_r31;
    u32 temp_r30;

    s32 temp_r4;
    var_r31 = 0;
    temp_r30 = M2C_FIELD(arg0, u32 *, 0x6C);
    if ((temp_r30 != 0U) && ((temp_r4 = TWindowDD__sub_80348B70(arg1)) != 0)) {
        TWindowDD__sub_803412F0(temp_r30, temp_r4);
        TWindowDD__sub_803412A0(temp_r30);
        init_and_set_field50__9TWindowDDFPvPv(temp_r30, TWindowDD__data_805DFB50);
        var_r31 = 1;
    }
    return var_r31;
}
s32 TWindowDD__sub_80347EF4(u8 *arg0) {
    u8 *var_r3;
    var_r3 = (u8 *)(arg0 + (M2C_FIELD(arg0, s32 *, 0x20) * 4));
    var_r3 = (u8 *)(M2C_FIELD(var_r3, u8 **, 0x24));
    if (var_r3 != NULL) {
        return TWindowDD__sub_80342158(var_r3);
    }
    var_r3 = (u8 *)((void *)-1U);
    return -1;
}

}
