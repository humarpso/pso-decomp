#ifndef PSO_MISC_TOEXPLOSIVEMACHINE02_H
#define PSO_MISC_TOEXPLOSIVEMACHINE02_H

#include "types.h"
#include "pso/misc/TOExplosiveMachine.h"

struct TOExplosiveMachine02 : public TOExplosiveMachine {
    virtual ~TOExplosiveMachine02();
};

typedef char TOExplosiveMachine02_size[sizeof(TOExplosiveMachine02) == 0xAC ? 1 : -1];
extern "C" {
void *TOExplosiveMachine02__create(void *arg0);
void *TOExplosiveMachine02__ct(void *arg0, s32 arg1);
void *__dt__20TOExplosiveMachine02Fv(void *arg0, s16 arg1);
}

#endif
