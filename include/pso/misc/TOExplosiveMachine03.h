#ifndef PSO_MISC_TOEXPLOSIVEMACHINE03_H
#define PSO_MISC_TOEXPLOSIVEMACHINE03_H

#include "types.h"
#include "pso/misc/TOExplosiveMachine.h"

struct TOExplosiveMachine03 : public TOExplosiveMachine {
    virtual ~TOExplosiveMachine03();
};

typedef char TOExplosiveMachine03_size[sizeof(TOExplosiveMachine03) == 0xAC ? 1 : -1];

extern "C" {
void *TOExplosiveMachine03__create(void *arg0);
void *TOExplosiveMachine03__ct(TOExplosiveMachine03 *explosive_machine03, s32 arg1);
void *__dt__20TOExplosiveMachine03Fv(void *arg0, s16 arg1);
}

#endif
