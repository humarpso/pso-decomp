#ifndef PSO_NPC_TOBJNPCNFW01_H
#define PSO_NPC_TOBJNPCNFW01_H

#include "types.h"
#include "pso/npc/TUnk_804A8640.h"

struct TObjNpcNFW01 : public TUnk_804A8640 {
    virtual ~TObjNpcNFW01();
    static void free_resources();
    static void load_resources();
};

typedef char TObjNpcNFW01_size[sizeof(TObjNpcNFW01) == 0x3B8 ? 1 : -1];

extern "C" {
u8 *TObjNpcNFW01__ct(u8 *arg0, s32 arg1, s32 arg2);
void *TObjNpcNHW00__create(void *arg0);
void *__dt__12TObjNpcNFW01Fv(void *arg0, s16 arg1);
}

#endif
