#ifndef PSO_MISC_TODOORANCIENT01_H
#define PSO_MISC_TODOORANCIENT01_H

#include "types.h"
#include "pso/unk/TUnk_804B0BB8.h"

struct TODoorAncient01 : public TUnk_804B0BB8 {
    virtual ~TODoorAncient01();
    virtual void vfunc_20();
    virtual void vfunc_17();
    virtual void play_proximity_sound();
    void *destroy_ancient_door_base(s16 arg1);
    virtual void render();
    static void *create(void *arg0);
    static void free_statics();
    static void load_assets();};

typedef char TODoorAncient01_size[sizeof(TODoorAncient01) == 0xD4 ? 1 : -1];
#endif
