#ifndef PSO_MISC_TODOORANCIENT04_H
#define PSO_MISC_TODOORANCIENT04_H

#include "types.h"
#include "pso/unk/TUnk_804B0BB8.h"

struct TODoorAncient04 : public TUnk_804B0BB8 {
    virtual ~TODoorAncient04();
    virtual void vfunc_20();
    virtual void vfunc_17();
    virtual void play_proximity_sound();
    virtual void render();
    static void *create(void *arg0);
    static void cleanup_refs();
    static void load_resources();
};

typedef char TODoorAncient04_size[sizeof(TODoorAncient04) == 0xD4 ? 1 : -1];
#endif
