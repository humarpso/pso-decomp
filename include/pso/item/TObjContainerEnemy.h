#ifndef PSO_ITEM_TOBJCONTAINERENEMY_H
#define PSO_ITEM_TOBJCONTAINERENEMY_H

#include "types.h"
#include "pso/player/TUnk_804B6C24.h"

struct TObjContainerEnemy : public TUnk_804B6C24 {
    virtual ~TObjContainerEnemy();
    static void *create(void *arg0);};

typedef char TObjContainerEnemy_size[sizeof(TObjContainerEnemy) == 0x368 ? 1 : -1];
#endif
