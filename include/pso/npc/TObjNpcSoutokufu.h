#ifndef PSO_NPC_TOBJNPCSOUTOKUFU_H
#define PSO_NPC_TOBJNPCSOUTOKUFU_H

#include "types.h"
#include "pso/npc/TUnk_804A9F50.h"

struct TObjNpcSoutokufu : public TUnk_804A9F50 {
    virtual ~TObjNpcSoutokufu();
    static void close_dialog_window();
    static void load_shared_resource();
};

typedef char TObjNpcSoutokufu_size[sizeof(TObjNpcSoutokufu) == 0x3B8 ? 1 : -1];
#endif
