#ifndef PSO_NPC_TOBJNPCLAPPY_H
#define PSO_NPC_TOBJNPCLAPPY_H

#include "types.h"
#include "pso/npc/TObjNpcBase.h"

struct TObjNpcLappy : public TObjNpcBase {
    virtual ~TObjNpcLappy();};

typedef char TObjNpcLappy_size[sizeof(TObjNpcLappy) == 0x3B8 ? 1 : -1];
#endif
