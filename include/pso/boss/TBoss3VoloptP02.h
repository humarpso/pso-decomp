#ifndef PSO_BOSS_TBOSS3VOLOPTP02_H
#define PSO_BOSS_TBOSS3VOLOPTP02_H

#include "types.h"
#include "pso/enemy/TObjEnemyCustom.h"

class TBoss3VoloptP02 : public TObjEnemyCustom {
public:
    void clear_flag_08000000();
    void set_flag_08000000();
};

#endif
