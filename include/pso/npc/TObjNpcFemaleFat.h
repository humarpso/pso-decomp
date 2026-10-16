#ifndef PSO_NPC_TOBJNPCFEMALEFAT_H
#define PSO_NPC_TOBJNPCFEMALEFAT_H

#include "types.h"
#include "pso/npc/TUnk_804A8640.h"

struct TObjNpcFemaleFat : public TUnk_804A8640 {
    virtual ~TObjNpcFemaleFat();
    static void free_static_model();
    static void load_static_resource();};

typedef char TObjNpcFemaleFat_size[sizeof(TObjNpcFemaleFat) == 0x3B8 ? 1 : -1];
#endif
