#ifndef PSO_MISC_TOROCKCAVESL02_H
#define PSO_MISC_TOROCKCAVESL02_H

#include "types.h"
#include "pso/misc/TORockCaveSimple.h"

struct TORockCaveSL02 : public TORockCaveSimple {
    virtual ~TORockCaveSL02();};

typedef char TORockCaveSL02_size[sizeof(TORockCaveSL02) == 0xB4 ? 1 : -1];
#endif
