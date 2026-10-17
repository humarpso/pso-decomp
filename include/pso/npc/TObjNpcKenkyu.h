#ifndef PSO_NPC_TOBJNPCKENKYU_H
#define PSO_NPC_TOBJNPCKENKYU_H

#include "types.h"
#include "pso/npc/TUnk_804A9F50.h"

struct TObjNpcKenkyu : public TUnk_804A9F50 {
    virtual ~TObjNpcKenkyu();
    static void free_static_model();
    static void load_shared_resource();
};

typedef char TObjNpcKenkyu_size[sizeof(TObjNpcKenkyu) == 0x3B8 ? 1 : -1];
#endif
