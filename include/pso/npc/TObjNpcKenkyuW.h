#ifndef PSO_NPC_TOBJNPCKENKYUW_H
#define PSO_NPC_TOBJNPCKENKYUW_H

#include "types.h"
#include "pso/npc/TUnk_804A9F50.h"

struct TObjNpcKenkyuW : public TUnk_804A9F50 {
    virtual ~TObjNpcKenkyuW();
    static void destroy_instance();
    static void load_resource_instance();
};

typedef char TObjNpcKenkyuW_size[sizeof(TObjNpcKenkyuW) == 0x3B8 ? 1 : -1];
#endif
