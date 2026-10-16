#ifndef PSO_ENEMY_TUNK_80493450_H
#define PSO_ENEMY_TUNK_80493450_H
#include "types.h"
#include "pso/enemy/TObjEnemy.h"

class TUnk_80493450 : public TObjEnemy {
public:
    virtual ~TUnk_80493450();
    u8 unk_374[0x34];
};
typedef char TUnk_80493450_size[sizeof(TUnk_80493450) == 0x3A8 ? 1 : -1];

#endif
