#ifndef PSO_NPC_TOBJNPCARM00_H
#define PSO_NPC_TOBJNPCARM00_H

#include "types.h"
#include "pso/npc/TUnk_804A9F50.h"

struct TObjNpcARM00 : public TUnk_804A9F50 {
    virtual ~TObjNpcARM00();
    virtual void play_voice();
    static void free_resources();
    static void load_resources();
};

typedef char TObjNpcARM00_size[sizeof(TObjNpcARM00) == 0x3B8 ? 1 : -1];
#endif
