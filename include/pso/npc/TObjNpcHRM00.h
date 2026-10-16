#ifndef PSO_NPC_TOBJNPCHRM00_H
#define PSO_NPC_TOBJNPCHRM00_H

#include "types.h"
#include "pso/npc/TUnk_804A9F50.h"

struct TObjNpcHRM00 : public TUnk_804A9F50 {
    virtual ~TObjNpcHRM00();
    static void destroy_resources();
    static void load_resources();};

typedef char TObjNpcHRM00_size[sizeof(TObjNpcHRM00) == 0x3B8 ? 1 : -1];
#endif
