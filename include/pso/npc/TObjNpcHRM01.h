#ifndef PSO_NPC_TOBJNPCHRM01_H
#define PSO_NPC_TOBJNPCHRM01_H

#include "types.h"
#include "pso/npc/TUnk_804A9F50.h"

struct TObjNpcHRM01 : public TUnk_804A9F50 {
    virtual ~TObjNpcHRM01();
    static void free_shared_objects();
    static void load_resources();
};

typedef char TObjNpcHRM01_size[sizeof(TObjNpcHRM01) == 0x3B8 ? 1 : -1];
extern "C" {
u8 *TObjNpcHRM01__ct(u8 *arg0, s32 arg1, s32 arg2);
void *TObjNpcLappy__create(void *arg0);
void *__dt__12TObjNpcHRM01Fv(void *arg0, s16 arg1);
}

#endif
