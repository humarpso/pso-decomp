#ifndef PSO_MISC_TTECSLICER_H
#define PSO_MISC_TTECSLICER_H
#include "types.h"
#include <stddef.h>

struct TTecSlicer {
    static s32 create(u16* launch);

    u8 base[0x24];
    u32 textureHandle;
    u8 unknown28[0x10];
    f32 position[3];
    f32 previousPosition[3];
    u8 unknown50[0xC];
    s32 spin, yaw, roll;
    f32 scale[3];
    u8 unknown74[0x1C];
    f32 direction[3];
    f32 origin[3];
    f32 destination[3];
    f32 speed, range, radius;
    u32 flags;
    u16 targetId;
    u8 targetPart, paddingC7;
    u8 capturedTargets[0x20];
    u8 secondaryTargets[0x20];
    void* currentWeapon;
    void* currentPlayer;
    void* model;
    u16 playerId, padding116;
    u32 weaponHandle;
    s16 attackKind, comboStage;
    f32 damageMultiplier;
    void* star;
    f32 argb[4];
    s32 spinVelocity;
    s32 useColorOverride;
};
typedef char SlicerSize[(sizeof(TTecSlicer)==0x140)?1:-1];
typedef char SlicerPosition[(offsetof(TTecSlicer,position)==0x38)?1:-1];
typedef char SlicerDirection[(offsetof(TTecSlicer,direction)==0x90)?1:-1];
typedef char SlicerCapturedTargets[(offsetof(TTecSlicer,capturedTargets)==0xC8)?1:-1];
typedef char SlicerColor[(offsetof(TTecSlicer,argb)==0x128)?1:-1];
#endif
