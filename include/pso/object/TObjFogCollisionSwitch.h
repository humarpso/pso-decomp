#ifndef PSO_OBJECT_TOBJFOGCOLLISIONSWITCH_H
#define PSO_OBJECT_TOBJFOGCOLLISIONSWITCH_H

#include "types.h"
#include "pso/object/TObjFogCollision.h"

struct TObjFogCollisionSwitch : public TObjFogCollision {
    virtual ~TObjFogCollisionSwitch();
    virtual void vfunc_14();
    virtual void run_task();};

typedef char TObjFogCollisionSwitch_size[sizeof(TObjFogCollisionSwitch) == 0x98 ? 1 : -1];
#endif
