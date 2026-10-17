#ifndef PSO_NPC_TOBJNPCNHW01_H
#define PSO_NPC_TOBJNPCNHW01_H

#include "types.h"
#include "pso/npc/TUnk_804A8640.h"

struct TObjNpcNHW01 : public TUnk_804A8640 {
    virtual ~TObjNpcNHW01();
    static void free_resources();
    static void load_resources();
};

typedef char TObjNpcNHW01_size[sizeof(TObjNpcNHW01) == 0x3B8 ? 1 : -1];

extern "C" {
u8 *TObjNpcNHW01__ct(u8 *arg0, s32 arg1, s32 arg2);
void *TObjNpcNurseBase__create(void *arg0);
void *__dt__12TObjNpcNHW01Fv(void *arg0, s16 arg1);
}

#endif
