#ifndef PSO_MISC_TOCONTAINERANCIENTENEMYRARE_H
#define PSO_MISC_TOCONTAINERANCIENTENEMYRARE_H

#include "types.h"
#include "pso/misc/TOContainerAncientEnemy.h"

struct TOContainerAncientEnemyRare : public TOContainerAncientEnemy {
    virtual ~TOContainerAncientEnemyRare();
};

typedef char TOContainerAncientEnemyRare_size[sizeof(TOContainerAncientEnemyRare) == 0x368 ? 1 : -1];
extern "C" {
s32 TOContainerAncientEnemyCommon__create(s32 arg0);
u8 *TOContainerAncientEnemyRare__ct(u8 *arg0, s32 arg1);
void *__dt__27TOContainerAncientEnemyRareFv(void *arg0, s16 arg1);
}

#endif
