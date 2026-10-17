#ifndef PSO_MISC_TODOORANCIENT03_H
#define PSO_MISC_TODOORANCIENT03_H

#include "types.h"
#include "pso/unk/TUnk_804B0BB8.h"

struct TODoorAncient03 : public TUnk_804B0BB8 {
    virtual ~TODoorAncient03();
    virtual void vfunc_20();
    virtual void vfunc_17();
    virtual void play_proximity_sound();
    virtual void render();
    static void *create(void *arg0);
    static void free_resources();
    static void load_resources();
};

typedef char TODoorAncient03_size[sizeof(TODoorAncient03) == 0xD4 ? 1 : -1];
#endif
