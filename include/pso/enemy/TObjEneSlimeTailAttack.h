#ifndef PSO_ENEMY_TOBJENESLIMETAILATTACK_H
#define PSO_ENEMY_TOBJENESLIMETAILATTACK_H

#include "types.h"
#include "pso/enemy/TObjEnemy.h"

struct TObjEneSlimeTailAttack : public TObjEnemy {
    virtual ~TObjEneSlimeTailAttack();
    int find_nearest_enemy_with_flag(f32);};

#endif
