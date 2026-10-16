#ifndef PSO_MISC_TOBIWAMUSHI_H
#define PSO_MISC_TOBIWAMUSHI_H

#include "types.h"
#include "pso/misc/TODragonfly.h"

struct TOBiwaMushi : public TODragonfly {
    virtual ~TOBiwaMushi();
    static void free_shared_data();
    static void load_resource_instance();};

typedef char TOBiwaMushi_size[sizeof(TOBiwaMushi) == 0x100 ? 1 : -1];
#endif
