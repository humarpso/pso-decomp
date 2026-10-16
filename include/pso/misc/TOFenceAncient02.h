#ifndef PSO_MISC_TOFENCEANCIENT02_H
#define PSO_MISC_TOFENCEANCIENT02_H

#include "types.h"
#include "pso/player/TUnk_804B1B80.h"

struct TOFenceAncient02 : public TUnk_804B1B80 {
    virtual ~TOFenceAncient02();
    static void *create(void *arg0);
    static void free_resources();
    static void load_assets();};

typedef char TOFenceAncient02_size[sizeof(TOFenceAncient02) == 0xD8 ? 1 : -1];
#endif
