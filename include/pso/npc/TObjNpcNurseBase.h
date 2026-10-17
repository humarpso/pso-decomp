#ifndef PSO_NPC_TOBJNPCNURSEBASE_H
#define PSO_NPC_TOBJNPCNURSEBASE_H

#include "types.h"
#include "pso/npc/TUnk_804A8640.h"

struct TObjNpcNurseBase : public TUnk_804A8640 {
    virtual ~TObjNpcNurseBase();
    static void free_shared_data();
    static void load_shared_data();
};

typedef char TObjNpcNurseBase_size[sizeof(TObjNpcNurseBase) == 0x3B8 ? 1 : -1];
extern "C" {
u8 *TObjNpcNurseBase__ct(u8 *arg0, s32 arg1, s32 arg2);
void *TObjNpcSecretaryBase__create(void *arg0);
void *__dt__16TObjNpcNurseBaseFv(void *arg0, s16 arg1);
}

#endif
