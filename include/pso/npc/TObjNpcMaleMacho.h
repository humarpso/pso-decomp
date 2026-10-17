#ifndef PSO_NPC_TOBJNPCMALEMACHO_H
#define PSO_NPC_TOBJNPCMALEMACHO_H

#include "types.h"
#include "pso/npc/TUnk_804A9F50.h"

struct TObjNpcMaleMacho : public TUnk_804A9F50 {
    virtual ~TObjNpcMaleMacho();
    static void close_dialog_window();
    static void load_static_resource();
};

typedef char TObjNpcMaleMacho_size[sizeof(TObjNpcMaleMacho) == 0x3B8 ? 1 : -1];

extern "C" {
u8 *TObjNpcMaleMacho__ct(u8 *arg0, s32 arg1, s32 arg2);
void *TObjNpcMaleOld__create(void *arg0);
void *__dt__16TObjNpcMaleMachoFv(void *arg0, s16 arg1);
}

#endif
