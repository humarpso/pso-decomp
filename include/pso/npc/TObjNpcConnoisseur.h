#ifndef PSO_NPC_TOBJNPCCONNOISSEUR_H
#define PSO_NPC_TOBJNPCCONNOISSEUR_H

#include "types.h"
#include "pso/npc/TUnk_804A9F50.h"

struct TObjNpcConnoisseur : public TUnk_804A9F50 {
    virtual ~TObjNpcConnoisseur();
    static void destroy_instance();
    static void load_section_motion();};

typedef char TObjNpcConnoisseur_size[sizeof(TObjNpcConnoisseur) == 0x3B8 ? 1 : -1];
#endif
