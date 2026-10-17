#ifndef PSO_NPC_TOBJNPCMALETALL_H
#define PSO_NPC_TOBJNPCMALETALL_H

#include "types.h"
#include "pso/npc/TUnk_804A9F50.h"

struct TObjNpcMaleTall : public TUnk_804A9F50 {
    virtual ~TObjNpcMaleTall();
    static void destroy_instance();
    static void load_resource_instance();
};

typedef char TObjNpcMaleTall_size[sizeof(TObjNpcMaleTall) == 0x3B8 ? 1 : -1];

extern "C" {
u8 *TObjNpcMaleTall__ct(u8 *arg0, s32 arg1, s32 arg2);
void *__dt__15TObjNpcMaleTallFv(void *arg0, s16 arg1);
}

#endif
