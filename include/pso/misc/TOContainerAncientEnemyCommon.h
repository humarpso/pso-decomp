#ifndef PSO_MISC_TOCONTAINERANCIENTENEMYCOMMON_H
#define PSO_MISC_TOCONTAINERANCIENTENEMYCOMMON_H

#include "types.h"
#include "pso/misc/TOContainerAncientEnemy.h"

struct TOContainerAncientEnemyCommon : public TOContainerAncientEnemy {
    virtual ~TOContainerAncientEnemyCommon();
};

typedef char TOContainerAncientEnemyCommon_size[sizeof(TOContainerAncientEnemyCommon) == 0x368 ? 1 : -1];
#endif
