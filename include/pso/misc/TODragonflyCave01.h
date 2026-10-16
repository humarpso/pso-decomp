#ifndef PSO_MISC_TODRAGONFLYCAVE01_H
#define PSO_MISC_TODRAGONFLYCAVE01_H

#include "types.h"
#include "pso/misc/TODragonfly.h"

struct TODragonflyCave01 : public TODragonfly {
    virtual ~TODragonflyCave01();
    static void release_static_instance();
    static void load_resources();
};

typedef char TODragonflyCave01_size[sizeof(TODragonflyCave01) == 0x100 ? 1 : -1];
#endif
