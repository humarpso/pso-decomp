#ifndef PSO_NPC_TOBJNPCNGCBASE_H
#define PSO_NPC_TOBJNPCNGCBASE_H

#include "types.h"
#include "pso/npc/TUnk_804A9F50.h"

struct TObjNpcNgcBase : public TUnk_804A9F50 {
    virtual ~TObjNpcNgcBase();
    static void free_shared_resources();
    static void load_resources();
};

typedef char TObjNpcNgcBase_size[sizeof(TObjNpcNgcBase) == 0x3B8 ? 1 : -1];
extern "C" {
void *__dt__14TObjNpcNgcBaseFv(void *arg0, s16 arg1);
}

#endif
