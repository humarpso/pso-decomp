#ifndef PSO_BOSS_TBOSS3VOLOPTMONITOR_H
#define PSO_BOSS_TBOSS3VOLOPTMONITOR_H

#include "types.h"
#include "pso/enemy/TObjEnemyCustom.h"

struct TBoss3VoloptMonitor : public TObjEnemyCustom {
    virtual ~TBoss3VoloptMonitor();
    virtual void render();
    virtual void run_task();
    s16 m_38c;
    s16 m_38e;
    s16 m_390;
    void update_state();
    static void release();
    static void load_resources();
    static void *create(void *arg0);
    void set_flags_30();
    u8 unk_392[0x2];
};

typedef char TBoss3VoloptMonitor_size[sizeof(TBoss3VoloptMonitor) == 0x394 ? 1 : -1];
#endif
