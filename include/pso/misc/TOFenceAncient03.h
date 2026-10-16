#ifndef PSO_MISC_TOFENCEANCIENT03_H
#define PSO_MISC_TOFENCEANCIENT03_H

#include "types.h"
#include "pso/player/TUnk_804B1B80.h"

struct TOFenceAncient03 : public TUnk_804B1B80 {
    virtual ~TOFenceAncient03();
    virtual void vfunc_14();
    virtual void vfunc_15();
    virtual void vfunc_16();
    static void *create(void *arg0);
    static void free_shared_resources();
    static void load_resources();};

typedef char TOFenceAncient03_size[sizeof(TOFenceAncient03) == 0xD8 ? 1 : -1];
#endif
