#ifndef PSO_ENEMY_TOBJENEMOJA_H
#define PSO_ENEMY_TOBJENEMOJA_H
#include "types.h"

struct MojaBattleStat {
    u8 unknown_00[0x18];
    s32 techniqueLevel;
};
struct TObjEneMoja {
    void bindModel(int index);
    u8 unknown_00[0x24];
    void* textures;
    u8 unknown_28[0xC];
    void* model;
    u8 unknown_38[0x278];
    MojaBattleStat* battleStat;
    u8 unknown_2B4[0x72];
    s16 mode;
    s16 phase;
    u8 unknown_32A[0xA];
    s32 localControl;
    u16 targetId;
    s16 resetTimer;
    s16 timer;
    s16 referenceHp;
    u8 unknown_340[0x14];
    f32 authoredAppearance;
    f32 authoredTechniqueChance;
    f32 authoredJumpChance;
    u8 unknown_360[8];
    s32 rare;
    u8 unknown_36C[8];
    s32 appearance;
    f32 jumpSpeed;
    s32 unused_37C;
    s32 attack;
    s32 attackSequence;
    s32 roar;
    f32 sinkOffset;
    f32 techniqueChance;
    f32 jumpChance;
    u8 unknown_398[0x74];
};
typedef char MojaSize[(sizeof(TObjEneMoja)==0x40C)?1:-1];
#endif
