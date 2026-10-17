#ifndef PSO_NPC_TOBJNPCNHW00_H
#define PSO_NPC_TOBJNPCNHW00_H

#include "types.h"
#include "pso/npc/TUnk_804A8640.h"

struct TObjNpcNHW00 : public TUnk_804A8640 {
    virtual ~TObjNpcNHW00();
    static void free_static_resources();
    static void load_resources();
};

typedef char TObjNpcNHW00_size[sizeof(TObjNpcNHW00) == 0x3B8 ? 1 : -1];

extern "C" {
u8 *TObjNpcNHW00__ct(u8 *arg0, s32 arg1, s32 arg2);
void *TObjNpcNHW01__create(void *arg0);
void *__dt__12TObjNpcNHW00Fv(void *arg0, s16 arg1);
}

#endif
