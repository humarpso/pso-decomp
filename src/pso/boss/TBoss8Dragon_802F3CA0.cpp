#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802F3CA0_lbl_80474508 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_802F3CA0_lbl_80474530 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_802F3CA0_lbl_80474558 {
    M2C_UNK value;
    u8 remaining[0x24];
};

extern "C" {
extern RecoveredGlobal_802F3CA0_lbl_80474508 lbl_80474508;
extern RecoveredGlobal_802F3CA0_lbl_80474530 lbl_80474530;
extern RecoveredGlobal_802F3CA0_lbl_80474558 lbl_80474558;
void TBoss8Dragon__sub_802F3CA0(u8 *arg0, s8 arg1);
}

extern "C" {

typedef char RecoveredGlobal_802F3CA0_lbl_80474508_size[sizeof(RecoveredGlobal_802F3CA0_lbl_80474508) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_802F3CA0_lbl_80474530_size[sizeof(RecoveredGlobal_802F3CA0_lbl_80474530) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_802F3CA0_lbl_80474558_size[sizeof(RecoveredGlobal_802F3CA0_lbl_80474558) == 0x28 ? 1 : -1];
void TBoss8Dragon__sub_802F3CA0(u8 *arg0, s8 arg1) {
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0x3E8) = (s32) arg1;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3E8);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x75C) = 1;
        M2C_FIELD(arg0, M2C_UNK **, 0x760) = &lbl_80474508.value;
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x75C) = 2;
        M2C_FIELD(arg0, M2C_UNK **, 0x760) = &lbl_80474530.value;
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x75C) = 3;
        M2C_FIELD(arg0, M2C_UNK **, 0x760) = &lbl_80474558.value;
        return;
    }
}

}
