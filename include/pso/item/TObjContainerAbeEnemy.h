#ifndef PSO_ITEM_TOBJCONTAINERABEENEMY_H
#define PSO_ITEM_TOBJCONTAINERABEENEMY_H

#include "types.h"
#include "pso/player/TUnk_804B6C24.h"

struct TObjContainerAbeEnemy : public TUnk_804B6C24 {
    virtual ~TObjContainerAbeEnemy();};

typedef char TObjContainerAbeEnemy_size[sizeof(TObjContainerAbeEnemy) == 0x368 ? 1 : -1];
#endif
