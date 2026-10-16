#ifndef PSO_BOSS_TBOSS3VOLOPTP01_H
#define PSO_BOSS_TBOSS3VOLOPTP01_H

#include "types.h"
#include "pso/enemy/TObjEnemyCustom.h"

struct TBoss3VoloptP01 : public TObjEnemyCustom {
    virtual ~TBoss3VoloptP01();
    virtual void render();
    virtual void run_task();
    u8 _pad38C[0x28];
    u32 m_3b4;
    u32 m_3b8;
    void* m_3bc;
    void run_state_machine();
    void update_breakup();
    void update_state();
    void dispatch_state();
    static void destroy();
    static void init_breakup_effect();
    static void *create(void *arg0);
    void init_cursor_record();
    u8 unk_3C0[0x58];
};

typedef char TBoss3VoloptP01_size[sizeof(TBoss3VoloptP01) == 0x418 ? 1 : -1];
#endif
