#ifndef PSO_MISC_TOWRECKANCIENT01_H
#define PSO_MISC_TOWRECKANCIENT01_H

#include "types.h"
#include "pso/misc/TOWreckAncient.h"

struct TOWreckAncient01 : public TOWreckAncient {
    virtual ~TOWreckAncient01();
};

typedef char TOWreckAncient01_size[sizeof(TOWreckAncient01) == 0xB4 ? 1 : -1];

extern "C" {
void *TOWreckAncient01__create(void *arg0);
void *__dt__16TOWreckAncient01Fv(void *arg0, s16 arg1);
}

#endif
