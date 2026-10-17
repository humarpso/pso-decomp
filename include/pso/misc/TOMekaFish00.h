#ifndef PSO_MISC_TOMEKAFISH00_H
#define PSO_MISC_TOMEKAFISH00_H

#include "types.h"
#include "pso/misc/TODragonfly.h"

struct TOMekaFish00 : public TODragonfly {
    virtual ~TOMekaFish00();
    static void release_static_instance();
    static void load_shared_resource();
};

typedef char TOMekaFish00_size[sizeof(TOMekaFish00) == 0x100 ? 1 : -1];
#endif
