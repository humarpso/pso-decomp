#ifndef PSO_NPC_TOBJNPCNHW01_H
#define PSO_NPC_TOBJNPCNHW01_H

#include "types.h"
#include "pso/npc/TUnk_804A8640.h"

struct TObjNpcNHW01 : public TUnk_804A8640 {
    virtual ~TObjNpcNHW01();
    static void free_resources();
    static void load_resources();
};

typedef char TObjNpcNHW01_size[sizeof(TObjNpcNHW01) == 0x3B8 ? 1 : -1];
#endif
