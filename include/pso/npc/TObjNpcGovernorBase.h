#ifndef PSO_NPC_TOBJNPCGOVERNORBASE_H
#define PSO_NPC_TOBJNPCGOVERNORBASE_H

#include "types.h"
#include "pso/npc/TUnk_804A9F50.h"

struct TObjNpcGovernorBase : public TUnk_804A9F50 {
    virtual ~TObjNpcGovernorBase();
    static void free_shared_data();
    static void load_shared_resource();};

typedef char TObjNpcGovernorBase_size[sizeof(TObjNpcGovernorBase) == 0x3B8 ? 1 : -1];
#endif
