#include "types.h"
#include "pso/enemy/TObjEnemyCustom.h"

struct RecoveredGlobal_800C7F80___vt__15TObjEnemyCustom {
    s32 value;
    u8 remaining[0x148];
};

extern "C" {
u8 * initialize__9TObjEnemyFPv(void *);
extern s32 __vt__15TObjEnemyCustom[];
extern s32 lbl_805D2A60;
u8 *TObjEnemyCustom__ct(u8 *arg0);
}

extern "C" {

void *__dt__15TObjEnemyCustomFv(void *arg0, s16 arg1);
s32 restore_player_cameras();
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);

extern s32 __vt__15TObjEnemyCustom[];

void *__dt__15TObjEnemyCustomFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TObjEnemyCustom;
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 enemy_custom_camera_active_flag;

typedef char RecoveredGlobal_800C7F80___vt__15TObjEnemyCustom_size[sizeof(RecoveredGlobal_800C7F80___vt__15TObjEnemyCustom) == 0x14C ? 1 : -1];
u8 *TObjEnemyCustom__ct(u8 *arg0) {
    initialize__9TObjEnemyFPv(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_800C7F80___vt__15TObjEnemyCustom *)&__vt__15TObjEnemyCustom).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2A60;
    *(s32 *)((s8 *)arg0 + 0x374) = 0;
    *(s32 *)((s8 *)arg0 + 0x378) = 0;
    *(s32 *)((s8 *)arg0 + 0x37C) = 0;
    *(s32 *)((s8 *)arg0 + 0x380) = 0;
    *(s16 *)((s8 *)arg0 + 0x33A) = 0xF;
    *(s16 *)((s8 *)arg0 + 0x33C) = (s16) *(s16 *)((s8 *)arg0 + 0x33A);
    *(s32 *)((s8 *)arg0 + 0x388) = 0;
    return arg0;
}

void TObjEnemyCustom::update_camera_if_active() {
    if ((s32) enemy_custom_camera_active_flag != 0) {
        restore_player_cameras();
    }
}

}
