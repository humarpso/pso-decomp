#ifndef PSO_NPC_TOBJNPCMOJA_H
#define PSO_NPC_TOBJNPCMOJA_H

#include "types.h"
#include "pso/npc/TObjNpcBase.h"

struct TObjNpcMoja : public TObjNpcBase {
    virtual ~TObjNpcMoja();};

typedef char TObjNpcMoja_size[sizeof(TObjNpcMoja) == 0x3B8 ? 1 : -1];
#endif
