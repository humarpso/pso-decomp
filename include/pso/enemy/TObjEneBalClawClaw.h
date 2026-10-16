#ifndef PSO_ENEMY_TOBJENEBALCLAWCLAW_H
#define PSO_ENEMY_TOBJENEBALCLAWCLAW_H

#include "types.h"
#include "pso/enemy/TObjEneBalClaw.h"

struct TObjEneBalClawClaw : public TObjEneBalClaw {
    virtual ~TObjEneBalClawClaw();
    void clear_attack_flag();
    void update_state();
    void *create(void *arg1, void *arg2, void *arg3, void *arg4, void *arg5);
    void *create();
    void play_hit_effect();
    void play_claw_sound();
    void spawn_claw_effect();
    void play_claw_effect();
    static void spawn_child_enemy();
    void check_claw_distance();
    u8 unk_3C0[0x68];
};

typedef char TObjEneBalClawClaw_size[sizeof(TObjEneBalClawClaw) == 0x428 ? 1 : -1];
#endif
