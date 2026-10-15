#ifndef PSO_BOSS_TOBJBOSS5PILLARCTRL_H
#define PSO_BOSS_TOBJBOSS5PILLARCTRL_H

#include "types.h"

struct TObjBoss5PillarCtrl
{
    u32 m_1c;
    u32 m_20;
    static void render();
    static void run_task();
    void *create();
    int update_pillar();
    int forward_pillar_2B710();
    void play_sound_once();
};

#endif
