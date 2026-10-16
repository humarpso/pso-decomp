#ifndef PSO_NPC_TOBJNPCLAPPY_H
#define PSO_NPC_TOBJNPCLAPPY_H

#include "types.h"
#include "pso/npc/TObjNpcBase.h"

struct TObjNpcLappy : public TObjNpcBase {
    virtual ~TObjNpcLappy();
    void *destroy_npc_lappy_base(s16 arg1);};

typedef char TObjNpcLappy_size[sizeof(TObjNpcLappy) == 0x3B8 ? 1 : -1];
#endif
