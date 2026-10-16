#ifndef PSO_ENEMY_TOBJENEMOJA_H
#define PSO_ENEMY_TOBJENEMOJA_H
#include "types.h"

struct MojaBattleStat {
    u8 unknown_00[0x18];
    s32 techniqueLevel;
};
struct MojaCollisionState {
    u8 unknown_00[0x18];
    s32 flags;
};
struct TObjEneMoja {
    void render();
    void bindModel(int index);
    void enter_idle_state();
    void enter_approach_state();
    void enter_down_state();
    void enter_hurt_state();
    u8 unknown_00[0x24];
    void* textures;
    u8 unknown_28[8];
    s32 actorFlags;
    void* model;
    u8 unknown_38[0x6C];
    MojaCollisionState* collisionState;
    u8 unknown_A8[0x10];
    s16 action;
    u8 unknown_BA[0x1F6];
    MojaBattleStat* battleStat;
    u8 unknown_2B4[0x72];
    s16 mode;
    s16 phase;
    u8 unknown_32A[2];
    s16 hp;
    u8 unknown_32E[6];
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
    static void *create(void *arg0);
    static void free_resources();
    s32 calc_technique_level();
    void select_rare_variant();
    void update_death_state();
    void handle_death();
    static s32 update_technique_state(void *self_800AD3D8);
    static s32 update_punch_attack(void *self_800ADAAC);
    void begin_attack();
    s32 update_approach_state();
    void update_idle_state();
    s32 update_freeze_timer();
    s32 update_action_hold();
    void run_task();
};
typedef char MojaSize[(sizeof(TObjEneMoja)==0x40C)?1:-1];
#include <stddef.h>
#define MOJA_OFFSET(field, offset) typedef char MojaOffset_##field[(offsetof(TObjEneMoja, field)==offset)?1:-1]
MOJA_OFFSET(actorFlags,0x30);
MOJA_OFFSET(collisionState,0xA4);
MOJA_OFFSET(action,0xB8);
MOJA_OFFSET(mode,0x326);
MOJA_OFFSET(phase,0x328);
MOJA_OFFSET(hp,0x32C);
MOJA_OFFSET(timer,0x33C);
MOJA_OFFSET(referenceHp,0x33E);
MOJA_OFFSET(appearance,0x374);
MOJA_OFFSET(attackSequence,0x384);
MOJA_OFFSET(roar,0x388);
#undef MOJA_OFFSET
#endif
