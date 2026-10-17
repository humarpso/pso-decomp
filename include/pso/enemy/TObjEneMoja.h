#ifndef PSO_ENEMY_TOBJENEMOJA_H
#define PSO_ENEMY_TOBJENEMOJA_H
#include "types.h"
#include "pso/enemy/TObjEnemy.h"

struct MojaBattleStat {
    u8 unknown_00[0x18];
    s32 techniqueLevel;
};
struct MojaCollisionState {
    u8 unknown_00[0x18];
    s32 flags;
};
struct TObjEneMoja : public TObjEnemy {
    virtual ~TObjEneMoja();
    void render();
    void bindModel(int index);
    void enter_idle_state();
    void enter_approach_state();
    void enter_down_state();
    void enter_hurt_state();
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
    s32 select_attack();
};
typedef char MojaSize[(sizeof(TObjEneMoja)==0x40C)?1:-1];
#include <stddef.h>
#define MOJA_OFFSET(field, offset) typedef char MojaOffset_##field[(offsetof(TObjEneMoja, field)==offset)?1:-1]
MOJA_OFFSET(appearance,0x374);
MOJA_OFFSET(attackSequence,0x384);
MOJA_OFFSET(roar,0x388);
#undef MOJA_OFFSET
#endif
