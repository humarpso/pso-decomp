#ifndef PSO_NPC_TOBJNPCSOLDIERMACHO_H
#define PSO_NPC_TOBJNPCSOLDIERMACHO_H

#include "types.h"
#include "pso/npc/TUnk_804A9F50.h"

struct TObjNpcSoldierMacho : public TUnk_804A9F50 {
    virtual ~TObjNpcSoldierMacho();
    static void unload_static_data();
    static void load_shared_resource();
};

typedef char TObjNpcSoldierMacho_size[sizeof(TObjNpcSoldierMacho) == 0x3B8 ? 1 : -1];

extern "C" {
u8 *TObjNpcSoldierMacho__ct(u8 *arg0, s32 arg1, s32 arg2);
void *__dt__19TObjNpcSoldierMachoFv(void *arg0, s16 arg1);
}

// --- C functions defined in TObjNpcSoldierMacho.cpp ---
extern "C" {
u8 *TObjNpcSoldierMacho__ct(u8 *player, s32 arg1, s32 arg2);
void *__dt__19TObjNpcSoldierMachoFv(void *arg0, s16 arg1);
}
// --- end of C functions

#endif
