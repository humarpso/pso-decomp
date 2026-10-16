#ifndef PSO_ENEMY_TOBJENEBALCLAWCLAW_H
#define PSO_ENEMY_TOBJENEBALCLAWCLAW_H

#include "types.h"
#include "pso/enemy/TObjEneBalClaw.h"

struct TObjEneBalClawClaw : public TObjEneBalClaw {
    virtual ~TObjEneBalClawClaw();
    void update_attack_distance_state();
    void sub_80090D3C();
    void sub_80090798();
    virtual void vfunc_58();
    void sub_80090418(s32);
    void update_state();
    void *create(void *arg1, void *arg2, void *arg3, void *arg4, void *arg5);
    void *create();
    static void spawn_child_enemy();
    u8 unk_3C0[0x68];
    void set_claw_flags();
    void clear_flag();
    void enter_hit_state(s16 arg1);
    s32 check_active();
};

typedef char TObjEneBalClawClaw_size[sizeof(TObjEneBalClawClaw) == 0x428 ? 1 : -1];
#endif
