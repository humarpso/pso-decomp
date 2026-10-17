#ifndef PSO_NPC_TOBJNPCARW00_H
#define PSO_NPC_TOBJNPCARW00_H

#include "types.h"
#include "pso/npc/TUnk_804A8640.h"

struct TObjNpcARW00 : public TUnk_804A8640 {
    virtual ~TObjNpcARW00();
    virtual void play_voice();
    static void free_resources();
    static void load_resources();
};

typedef char TObjNpcARW00_size[sizeof(TObjNpcARW00) == 0x3B8 ? 1 : -1];

extern "C" {
u8 *TObjNpcARW00__ct(u8 *arg0, s32 arg1, s32 arg2);
void *__dt__12TObjNpcARW00Fv(void *arg0, s16 arg1);
}

#endif
