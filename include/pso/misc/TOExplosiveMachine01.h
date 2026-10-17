#ifndef PSO_MISC_TOEXPLOSIVEMACHINE01_H
#define PSO_MISC_TOEXPLOSIVEMACHINE01_H

#include "types.h"
#include "pso/misc/TOExplosiveMachine.h"

struct TOExplosiveMachine01 : public TOExplosiveMachine {
    virtual ~TOExplosiveMachine01();
};

typedef char TOExplosiveMachine01_size[sizeof(TOExplosiveMachine01) == 0xAC ? 1 : -1];

extern "C" {
void *TOExplosiveMachine01__create(void *arg0);
void *TOExplosiveMachine01__ct(TOExplosiveMachine01 *arg0, s32 arg1);
void *__dt__20TOExplosiveMachine01Fv(void *arg0, s16 arg1);
}

#endif
