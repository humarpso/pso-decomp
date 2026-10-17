#ifndef PSO_NPC_TOBJNPCMALEDWARF_H
#define PSO_NPC_TOBJNPCMALEDWARF_H

#include "types.h"
#include "pso/npc/TUnk_804A9F50.h"

struct TObjNpcMaleDwarf : public TUnk_804A9F50 {
    virtual ~TObjNpcMaleDwarf();
    static void unload_static_data();
    static void load_shared_resource();
};

typedef char TObjNpcMaleDwarf_size[sizeof(TObjNpcMaleDwarf) == 0x3B8 ? 1 : -1];

extern "C" {
u8 *TObjNpcMaleDwarf__ct(u8 *arg0, s32 arg1, s32 arg2);
void *TObjNpcMaleFat__create(void *arg0);
void *__dt__16TObjNpcMaleDwarfFv(void *arg0, s16 arg1);
}

#endif
