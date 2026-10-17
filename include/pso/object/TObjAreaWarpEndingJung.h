#ifndef PSO_OBJECT_TOBJAREAWARPENDINGJUNG_H
#define PSO_OBJECT_TOBJAREAWARPENDINGJUNG_H

#include "types.h"
#include "pso/object/TObjAreaWarpEnding.h"

struct TObjAreaWarpEndingJung : public TObjAreaWarpEnding {
    virtual ~TObjAreaWarpEndingJung();
    void render();
    void run_task();
};

typedef char TObjAreaWarpEndingJung_size[sizeof(TObjAreaWarpEndingJung) == 0xDC ? 1 : -1];
#endif
