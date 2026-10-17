#ifndef PSO_MISC_TOMEKAFISH01_H
#define PSO_MISC_TOMEKAFISH01_H

#include "types.h"
#include "pso/misc/TODragonfly.h"

struct TOMekaFish01 : public TODragonfly {
    virtual ~TOMekaFish01();
    static void free_static_data();
    static void load_shared_resource();
};

typedef char TOMekaFish01_size[sizeof(TOMekaFish01) == 0x100 ? 1 : -1];
#endif
