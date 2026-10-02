#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_800C7F80___vt__15TObjEnemyCustom {
    M2C_UNK value;
    u8 remaining[0x148];
};

extern "C" {
u8 * initialize__9TObjEnemyFPv(void *);
extern M2C_UNK __vt__15TObjEnemyCustom[];
extern s32 lbl_805D2A60;
u8 *TObjEnemyCustom__ct(u8 *arg0);
}

extern "C" {

void *__dt__15TObjEnemyCustomFv(void *arg0, s16 arg1);
void update_camera_if_active__15TObjEnemyCustomFv(void);
M2C_UNK restore_player_cameras();
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);

extern M2C_UNK __vt__15TObjEnemyCustom[];

void *__dt__15TObjEnemyCustomFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjEnemyCustom;
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_805D5198;

typedef char RecoveredGlobal_800C7F80___vt__15TObjEnemyCustom_size[sizeof(RecoveredGlobal_800C7F80___vt__15TObjEnemyCustom) == 0x14C ? 1 : -1];
u8 *TObjEnemyCustom__ct(u8 *arg0) {
    initialize__9TObjEnemyFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_800C7F80___vt__15TObjEnemyCustom *)&__vt__15TObjEnemyCustom).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2A60;
    M2C_FIELD(arg0, s32 *, 0x374) = 0;
    M2C_FIELD(arg0, s32 *, 0x378) = 0;
    M2C_FIELD(arg0, s32 *, 0x37C) = 0;
    M2C_FIELD(arg0, s32 *, 0x380) = 0;
    M2C_FIELD(arg0, s16 *, 0x33A) = 0xF;
    M2C_FIELD(arg0, s16 *, 0x33C) = (s16) M2C_FIELD(arg0, s16 *, 0x33A);
    M2C_FIELD(arg0, s32 *, 0x388) = 0;
    return arg0;
}

void update_camera_if_active__15TObjEnemyCustomFv(void) {
    if ((s32) lbl_805D5198 != 0) {
        restore_player_cameras();
    }
}

}
