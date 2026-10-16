#ifndef PSO_MISC_TOWRECKANCIENT05_H
#define PSO_MISC_TOWRECKANCIENT05_H

#include "types.h"
#include "pso/misc/TOWreckAncient.h"

struct TOWreckAncient05 : public TOWreckAncient {
    virtual ~TOWreckAncient05();
};

typedef char TOWreckAncient05_size[sizeof(TOWreckAncient05) == 0xB4 ? 1 : -1];
#endif
