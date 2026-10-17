#ifndef PSO_MISC_TOROCKCAVESM02_H
#define PSO_MISC_TOROCKCAVESM02_H

#include "types.h"
#include "pso/misc/TORockCaveSimple.h"

struct TORockCaveSM02 : public TORockCaveSimple {
    virtual ~TORockCaveSM02();
};

typedef char TORockCaveSM02_size[sizeof(TORockCaveSM02) == 0xB4 ? 1 : -1];
#endif
