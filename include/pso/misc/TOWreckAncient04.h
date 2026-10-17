#ifndef PSO_MISC_TOWRECKANCIENT04_H
#define PSO_MISC_TOWRECKANCIENT04_H

#include "types.h"
#include "pso/misc/TOWreckAncient.h"

struct TOWreckAncient04 : public TOWreckAncient {
    virtual ~TOWreckAncient04();
};

typedef char TOWreckAncient04_size[sizeof(TOWreckAncient04) == 0xB4 ? 1 : -1];

extern "C" {
void *TOWreckAncient04__create(void *arg0);
void *__dt__16TOWreckAncient04Fv(void *arg0, s16 arg1);
}

#endif
