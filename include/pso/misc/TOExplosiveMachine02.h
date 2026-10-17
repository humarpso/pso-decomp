#ifndef PSO_MISC_TOEXPLOSIVEMACHINE02_H
#define PSO_MISC_TOEXPLOSIVEMACHINE02_H

#include "types.h"
#include "pso/misc/TOExplosiveMachine.h"

struct TOExplosiveMachine02 : public TOExplosiveMachine {
    virtual ~TOExplosiveMachine02();
};

typedef char TOExplosiveMachine02_size[sizeof(TOExplosiveMachine02) == 0xAC ? 1 : -1];
#endif
