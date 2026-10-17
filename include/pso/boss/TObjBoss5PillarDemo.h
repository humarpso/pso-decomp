#ifndef PSO_BOSS_TOBJBOSS5PILLARDEMO_H
#define PSO_BOSS_TOBJBOSS5PILLARDEMO_H

#include "types.h"
#include "pso/boss/TObjBoss5Pillar.h"

struct TObjBoss5PillarDemo : public TObjBoss5Pillar {
    virtual ~TObjBoss5PillarDemo();
    static void update_active_pillar();
    static s32 create();
};

typedef char TObjBoss5PillarDemo_size[sizeof(TObjBoss5PillarDemo) == 0x4C ? 1 : -1];
#endif
