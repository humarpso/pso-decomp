#ifndef PSO_NPC_TOBJNPCSECRETARYBASE_H
#define PSO_NPC_TOBJNPCSECRETARYBASE_H

#include "types.h"
#include "pso/npc/TUnk_804A8640.h"

struct TObjNpcSecretaryBase : public TUnk_804A8640 {
    virtual ~TObjNpcSecretaryBase();
    static void free_static_data();
    static void load_static_data();
};

typedef char TObjNpcSecretaryBase_size[sizeof(TObjNpcSecretaryBase) == 0x3B8 ? 1 : -1];

extern "C" {
u8 *TObjNpcSecretaryBase__ct(u8 *arg0, s32 arg1, s32 arg2);
void *TObjNpcSoldierBase__create(void *arg0);
void *__dt__20TObjNpcSecretaryBaseFv(void *arg0, s16 arg1);
}

// --- C functions defined in TObjNpcSecretaryBase.cpp ---
extern "C" {
u8 *TObjNpcSecretaryBase__ct(u8 *arg0, s32 arg1, s32 arg2);
void *TObjNpcSoldierBase__create(void *arg0);
void *__dt__20TObjNpcSecretaryBaseFv(void *arg0, s16 arg1);
}
// --- end of C functions

#endif
