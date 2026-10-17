#ifndef PSO_NPC_TOBJNPCMALECHILD_H
#define PSO_NPC_TOBJNPCMALECHILD_H

#include "types.h"
#include "pso/npc/TUnk_804A9F50.h"

struct TObjNpcMaleChild : public TUnk_804A9F50 {
    virtual ~TObjNpcMaleChild();
    static void release_static_instance();
    static void load_shared_resource();
};

typedef char TObjNpcMaleChild_size[sizeof(TObjNpcMaleChild) == 0x3B8 ? 1 : -1];
extern "C" {
u8 *TObjNpcMaleChild__ct(u8 *arg0, s32 arg1, s32 arg2);
void *TObjNpcMaleDwarf__create(void *arg0);
void *__dt__16TObjNpcMaleChildFv(void *arg0, s16 arg1);
}

#endif
