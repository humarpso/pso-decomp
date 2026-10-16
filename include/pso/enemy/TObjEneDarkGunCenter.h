#ifndef PSO_ENEMY_TOBJENEDARKGUNCENTER_H
#define PSO_ENEMY_TOBJENEDARKGUNCENTER_H

#include "types.h"
#include "pso/enemy/TObjEnemy.h"

struct TObjEneDarkGunCenter : public TObjEnemy {
    virtual ~TObjEneDarkGunCenter();
    virtual void run_task();
    virtual void render();
    void sub_800A0994();
    u32 m_374;
    u32 m_378;
    u32 m_37c;
    u32 m_380;
    u8 _pad384[0x20];
    u32 m_3a4;
    static void *create(void *arg0);
    void hide_linked_enemies();};

typedef char TObjEneDarkGunCenter_size[sizeof(TObjEneDarkGunCenter) == 0x3A8 ? 1 : -1];
#endif
