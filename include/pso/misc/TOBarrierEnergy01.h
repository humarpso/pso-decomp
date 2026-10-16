#ifndef PSO_MISC_TOBARRIERENERGY01_H
#define PSO_MISC_TOBARRIERENERGY01_H

#include "types.h"
#include "pso/unk/TUnk_804B0BB8.h"

struct TOBarrierEnergy01 : public TUnk_804B0BB8 {
    virtual ~TOBarrierEnergy01();
    virtual void vfunc_20();
    virtual void vfunc_18();
    virtual void vfunc_17();
    virtual void vfunc_16();
    virtual void play_proximity_sound();
    void*init();
    void play_ambient_loop_sound();
    virtual void render();
    static void *create(void *arg0);
    static void free_resources();
    static void load_resources();};

typedef char TOBarrierEnergy01_size[sizeof(TOBarrierEnergy01) == 0xD4 ? 1 : -1];
#endif
