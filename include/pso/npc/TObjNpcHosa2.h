#ifndef PSO_NPC_TOBJNPCHOSA2_H
#define PSO_NPC_TOBJNPCHOSA2_H

#include "types.h"
#include "pso/npc/TUnk_804A9F50.h"

struct TObjNpcHosa2 : public TUnk_804A9F50 {
    virtual ~TObjNpcHosa2();
    static void close_dialog_window();
    static void load_shared_resource();
};

typedef char TObjNpcHosa2_size[sizeof(TObjNpcHosa2) == 0x3B8 ? 1 : -1];
#endif
