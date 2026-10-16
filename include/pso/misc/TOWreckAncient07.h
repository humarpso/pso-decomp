#ifndef PSO_MISC_TOWRECKANCIENT07_H
#define PSO_MISC_TOWRECKANCIENT07_H

#include "types.h"
#include "pso/misc/TOWreckAncient.h"

struct TOWreckAncient07 : public TOWreckAncient {
    virtual ~TOWreckAncient07();
};

typedef char TOWreckAncient07_size[sizeof(TOWreckAncient07) == 0xB4 ? 1 : -1];
#endif
