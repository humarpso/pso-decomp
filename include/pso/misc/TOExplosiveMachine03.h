#ifndef PSO_MISC_TOEXPLOSIVEMACHINE03_H
#define PSO_MISC_TOEXPLOSIVEMACHINE03_H

#include "types.h"
#include "pso/misc/TOExplosiveMachine.h"

struct TOExplosiveMachine03 : public TOExplosiveMachine {
    virtual ~TOExplosiveMachine03();};

typedef char TOExplosiveMachine03_size[sizeof(TOExplosiveMachine03) == 0xAC ? 1 : -1];
#endif
