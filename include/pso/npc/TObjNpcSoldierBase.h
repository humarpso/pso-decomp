#ifndef PSO_NPC_TOBJNPCSOLDIERBASE_H
#define PSO_NPC_TOBJNPCSOLDIERBASE_H

#include "types.h"
#include "pso/npc/TUnk_804A9F50.h"

struct TObjNpcSoldierBase : public TUnk_804A9F50 {
    virtual ~TObjNpcSoldierBase();
    static void release_static_instance();
    static void load_shared_resource();
};

typedef char TObjNpcSoldierBase_size[sizeof(TObjNpcSoldierBase) == 0x3B8 ? 1 : -1];

extern "C" {
u8 *TObjNpcSoldierBase__ct(u8 *arg0, s32 arg1, s32 arg2);
void *TObjNpcSoldierMacho__create(void *arg0);
void *__dt__18TObjNpcSoldierBaseFv(void *arg0, s16 arg1);
}

// --- C functions defined in TObjNpcSoldierBase.cpp ---
extern "C" {
u8 *TObjNpcSoldierBase__ct(u8 *player, s32 arg1, s32 arg2);
void *TObjNpcSoldierMacho__create(void *arg0);
void *__dt__18TObjNpcSoldierBaseFv(void *arg0, s16 arg1);
}
// --- end of C functions

#endif
