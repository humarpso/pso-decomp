#ifndef PSO_MISC_TOWRECKANCIENT02_H
#define PSO_MISC_TOWRECKANCIENT02_H

#include "types.h"
#include "pso/misc/TOWreckAncient.h"

struct TOWreckAncient02 : public TOWreckAncient {
    virtual ~TOWreckAncient02();
};

typedef char TOWreckAncient02_size[sizeof(TOWreckAncient02) == 0xB4 ? 1 : -1];
#endif
