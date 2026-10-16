#ifndef PSO_NPC_TOBJNPCKENKYU2_H
#define PSO_NPC_TOBJNPCKENKYU2_H

#include "types.h"
#include "pso/npc/TUnk_804A9F50.h"

struct TObjNpcKenkyu2 : public TUnk_804A9F50 {
    virtual ~TObjNpcKenkyu2();
    static void free_static_model();
    static void load_shared_resource();};

typedef char TObjNpcKenkyu2_size[sizeof(TObjNpcKenkyu2) == 0x3B8 ? 1 : -1];
#endif
