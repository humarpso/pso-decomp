#ifndef PSO_NPC_TOBJNPCEXPERTBASE_H
#define PSO_NPC_TOBJNPCEXPERTBASE_H

#include "types.h"
#include "pso/npc/TUnk_804A9F50.h"

struct TObjNpcExpertBase : public TUnk_804A9F50 {
    virtual ~TObjNpcExpertBase();
    static void free_shared_data();
    static void load_shared_resource();
};

typedef char TObjNpcExpertBase_size[sizeof(TObjNpcExpertBase) == 0x3B8 ? 1 : -1];
#endif
