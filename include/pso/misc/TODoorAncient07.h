#ifndef PSO_MISC_TODOORANCIENT07_H
#define PSO_MISC_TODOORANCIENT07_H

#include "types.h"
#include "pso/unk/TUnk_804B0BB8.h"

struct TODoorAncient07 : public TUnk_804B0BB8 {
    virtual ~TODoorAncient07();
    void render();
    static void *create(void *arg0);
    static void cleanup();
    static void load_resources();};

typedef char TODoorAncient07_size[sizeof(TODoorAncient07) == 0xD4 ? 1 : -1];
#endif
