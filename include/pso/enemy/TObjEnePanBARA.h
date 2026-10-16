#ifndef PSO_ENEMY_TOBJENEPANBARA_H
#define PSO_ENEMY_TOBJENEPANBARA_H
#include "types.h"
#include "pso/enemy/TObjEnemy.h"

class TObjEnePanBARA : public TObjEnemy {
public:
    virtual ~TObjEnePanBARA();
    u8 unk_374[0xFC];
};
typedef char TObjEnePanBARA_size[sizeof(TObjEnePanBARA) == 0x470 ? 1 : -1];

#endif
