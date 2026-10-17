#ifndef PSO_NPC_TOBJNPCAHM01_H
#define PSO_NPC_TOBJNPCAHM01_H

#include "types.h"
#include "pso/npc/TUnk_804A9F50.h"

struct TObjNpcAHM01 : public TUnk_804A9F50 {
    virtual ~TObjNpcAHM01();
    virtual void play_voice();
    static void free_resources();
    static void load_resources();
};

typedef char TObjNpcAHM01_size[sizeof(TObjNpcAHM01) == 0x3B8 ? 1 : -1];
#endif
