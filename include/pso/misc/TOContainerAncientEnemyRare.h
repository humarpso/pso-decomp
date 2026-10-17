#ifndef PSO_MISC_TOCONTAINERANCIENTENEMYRARE_H
#define PSO_MISC_TOCONTAINERANCIENTENEMYRARE_H

#include "types.h"
#include "pso/misc/TOContainerAncientEnemy.h"

struct TOContainerAncientEnemyRare : public TOContainerAncientEnemy {
    virtual ~TOContainerAncientEnemyRare();
};

typedef char TOContainerAncientEnemyRare_size[sizeof(TOContainerAncientEnemyRare) == 0x368 ? 1 : -1];
#endif
