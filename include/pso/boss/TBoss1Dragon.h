#ifndef PSO_BOSS_TBOSS1DRAGON_H
#define PSO_BOSS_TBOSS1DRAGON_H

#include "types.h"

struct DragonModelVector { f32 x, y, z; };
struct DragonModelAngles { s32 x, y, z; };
struct DragonModelNode {
    u32 flags;
    void* model;
    DragonModelVector position;
    DragonModelAngles rotation;
    DragonModelVector scale;
    DragonModelNode* child;
    DragonModelNode* sibling;
    f32 unknown34;
};

struct TBoss1Dragon {
    static bool isV2Mode();
    static DragonModelNode* cloneModelHierarchy(DragonModelNode* source, DragonModelNode* output, void* model);
    static s32 countModelNodes(DragonModelNode* source);
    void updateFacingPosition();
    int setState1();
    int initDefault();
    void saveCurrentDestination();
    void setDestinationX(int x);
    void saveTargetDestination();
    void restorePosition();
    void copySavedX(int* x);
    void restoreTargetPosition();
    void beginHeightTransition();
    void setPhase2();
    void setActive();
    void clearState();
    s32 isHpPhaseComplete();
    s32 isHpPhasePending();
    void setHpPhaseValue(int complete);
    void resetHpPhase();
    static void clearControlOverride();
    static void setControlOverride(s16 controlId);
    static void requestActionRefresh();

    u8 unknown000[0x34];
    void* renderModel;
    f32 positionX;
    f32 positionY;
    f32 positionZ;
    u8 unknown044[0x2B8 - 0x044];
    s16 maxHp;
    u8 unknown2BA[0x32C - 0x2BA];
    s16 hp;
    u8 unknown32E[0x394 - 0x32E];
    f32 targetX;
    f32 targetY;
    f32 targetZ;
    u8 unknown3A0[0x3C0 - 0x3A0];
    u32 flags;
    u8 unknown3C4[0x3E4 - 0x3C4];
    s32 phase;
    u8 unknown3E8[0x5D8 - 0x3E8];
    f32 height;
    f32 heightOffset;
    f32 defaultHeightOffset;
    u8 unknown5E4[0x67C - 0x5E4];
    s32 hpPhaseValue;
    s16 hpThreshold;
    s16 finalHpThreshold;
    u8 unknown684[0x690 - 0x684];
    f32 destinationX;
    f32 destinationZ;
    f32 savedX;
    f32 savedZ;
    u8 unknown6A0[0x76C - 0x6A0];
    s32 facingAngle;
    u8 unknown770[0x8BC - 0x770];
};

#include <stddef.h>
#define DRAGON_OFFSET(member, offset) \
    typedef char DragonOffset_##member[(offsetof(TBoss1Dragon, member) == offset) ? 1 : -1]
typedef char DragonModelNodeSize[(sizeof(DragonModelNode) == 0x38) ? 1 : -1];
typedef char DragonModelNodeChild[(offsetof(DragonModelNode, child) == 0x2C) ? 1 : -1];
DRAGON_OFFSET(positionX, 0x38);
DRAGON_OFFSET(maxHp, 0x2B8);
DRAGON_OFFSET(hp, 0x32C);
DRAGON_OFFSET(targetX, 0x394);
DRAGON_OFFSET(flags, 0x3C0);
DRAGON_OFFSET(phase, 0x3E4);
DRAGON_OFFSET(height, 0x5D8);
DRAGON_OFFSET(hpPhaseValue, 0x67C);
DRAGON_OFFSET(hpThreshold, 0x680);
DRAGON_OFFSET(destinationX, 0x690);
DRAGON_OFFSET(savedX, 0x698);
DRAGON_OFFSET(facingAngle, 0x76C);
typedef char DragonSize[(sizeof(TBoss1Dragon) == 0x8BC) ? 1 : -1];
#undef DRAGON_OFFSET

#endif
