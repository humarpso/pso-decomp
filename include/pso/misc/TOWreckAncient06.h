#ifndef PSO_MISC_TOWRECKANCIENT06_H
#define PSO_MISC_TOWRECKANCIENT06_H

#include "types.h"
#include "pso/misc/TOWreckAncient.h"

struct TOWreckAncient06 : public TOWreckAncient {
    virtual ~TOWreckAncient06();
};

typedef char TOWreckAncient06_size[sizeof(TOWreckAncient06) == 0xB4 ? 1 : -1];
#endif
