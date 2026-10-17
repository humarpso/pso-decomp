#ifndef PSO_NPC_TOBJNPCHRM00_H
#define PSO_NPC_TOBJNPCHRM00_H

#include "types.h"
#include "pso/npc/TUnk_804A9F50.h"

struct TObjNpcHRM00 : public TUnk_804A9F50 {
    virtual ~TObjNpcHRM00();
    static void destroy_resources();
    static void load_resources();
};

typedef char TObjNpcHRM00_size[sizeof(TObjNpcHRM00) == 0x3B8 ? 1 : -1];
extern "C" {
u8 *TObjNpcHRM00__ct(u8 *arg0, s32 arg1, s32 arg2);
void *TObjNpcHRM01__create(void *arg0);
void *__dt__12TObjNpcHRM00Fv(void *arg0, s16 arg1);
}

#endif
