#ifndef PSO_MISC_TOEXPLOSIVEMACHINE01_H
#define PSO_MISC_TOEXPLOSIVEMACHINE01_H

#include "types.h"
#include "pso/misc/TOExplosiveMachine.h"

struct TOExplosiveMachine01 : public TOExplosiveMachine {
    virtual ~TOExplosiveMachine01();};

typedef char TOExplosiveMachine01_size[sizeof(TOExplosiveMachine01) == 0xAC ? 1 : -1];
#endif
