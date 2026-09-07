#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802430E8_lbl_80518580 {
    M2C_UNK value;
    u8 remaining[0x17C];
};

struct RecoveredGlobal_80242F94_lbl_80518580 {
    M2C_UNK value;
    u8 remaining[0x17C];
};

struct RecoveredGlobal_80243010_lbl_80518580 {
    M2C_UNK value;
    u8 remaining[0x17C];
};

extern "C" {
extern RecoveredGlobal_802430E8_lbl_80518580 lbl_80518580;
M2C_UNK *TAdSinglePlyChrSelectGC__sub_802430E8(void);
s32 is_active__12TBoss3VoloptFPv(int);
extern RecoveredGlobal_802430E8_lbl_80518580 lbl_80518580;
M2C_UNK *TBoss3Volopt__sub_80242F94(u32 arg0);
s32 is_active__12TBoss3VoloptFPv(int);
extern RecoveredGlobal_802430E8_lbl_80518580 lbl_80518580;
M2C_UNK *TBoss3Volopt__sub_80243010(void);
}

extern "C" {

typedef char RecoveredGlobal_802430E8_lbl_80518580_size[sizeof(RecoveredGlobal_802430E8_lbl_80518580) == 0x180 ? 1 : -1];

typedef char RecoveredGlobal_80242F94_lbl_80518580_size[sizeof(RecoveredGlobal_80242F94_lbl_80518580) == 0x180 ? 1 : -1];
M2C_UNK *TBoss3Volopt__sub_80242F94(u32 arg0) {
    M2C_UNK *var_r31;
    s32 var_r30;
    var_r30 = 0;
    var_r31 = (M2C_UNK *)(&(*(RecoveredGlobal_80242F94_lbl_80518580 *)&lbl_80518580).value);
loop_1:
    if ((is_active__12TBoss3VoloptFPv((int) (var_r31)) != 0) && (M2C_FIELD(var_r31, u8 *, 0) & 0x80) && ((u32) M2C_FIELD(var_r31, u32 *, 0x14) == arg0)) {
        return var_r31;
    }
    var_r30 += 1;
    var_r31 = (M2C_UNK *)((u8 *)var_r31 + (0x18));
    if (var_r30 >= 0x10) {
        return NULL;
    }
    goto loop_1;
}

typedef char RecoveredGlobal_80243010_lbl_80518580_size[sizeof(RecoveredGlobal_80243010_lbl_80518580) == 0x180 ? 1 : -1];
M2C_UNK *TBoss3Volopt__sub_80243010(void) {
    M2C_UNK *var_r31;
    s32 var_r30;
    var_r30 = 0;
    var_r31 = (M2C_UNK *)(&(*(RecoveredGlobal_80243010_lbl_80518580 *)&lbl_80518580).value);
loop_1:
    if (is_active__12TBoss3VoloptFPv((int)(var_r31)) == 0) {
        return var_r31;
    }
    var_r30 += 1;
    var_r31 = (M2C_UNK *)((u8 *)var_r31 + (0x18));
    if (var_r30 >= 0x10) {
        return NULL;
    }
    goto loop_1;
}

M2C_UNK *TAdSinglePlyChrSelectGC__sub_802430E8(void) {
    return &lbl_80518580.value;
}

}
