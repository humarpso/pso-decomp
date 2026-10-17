#ifndef PSO_BOSS_TBOSS3VOLOPTHIRAISIN_H
#define PSO_BOSS_TBOSS3VOLOPTHIRAISIN_H

#include "types.h"
#include "pso/enemy/TObjEnemyCustom.h"

struct TBoss3VoloptHiraisin : public TObjEnemyCustom {
    virtual ~TBoss3VoloptHiraisin();
    void init_params();
    void dispatch_state();
    void sub_8004118C();
    virtual void render();
    virtual void run_task();
    u32 m_38c;
    static void init_models();
    static void *create(void *arg0);
    void load_params_from_table(s32 i);
    void set_hit_flags_and_notify();
    void spawn_effects();
    void damage_player_if_aligned();
    void update_state();
};

typedef char TBoss3VoloptHiraisin_size[sizeof(TBoss3VoloptHiraisin) == 0x390 ? 1 : -1];
#endif
