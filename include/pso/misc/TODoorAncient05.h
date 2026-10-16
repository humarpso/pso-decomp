#ifndef PSO_MISC_TODOORANCIENT05_H
#define PSO_MISC_TODOORANCIENT05_H

#include "types.h"
#include "pso/unk/TUnk_804B0BB8.h"

struct TODoorAncient05 : public TUnk_804B0BB8 {
    virtual ~TODoorAncient05();
    virtual void render();
    static void *create(void *arg0);
    static void reset();
    static void load_resources();};

typedef char TODoorAncient05_size[sizeof(TODoorAncient05) == 0xD4 ? 1 : -1];
#endif
