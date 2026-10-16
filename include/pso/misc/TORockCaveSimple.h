#ifndef PSO_MISC_TOROCKCAVESIMPLE_H
#define PSO_MISC_TOROCKCAVESIMPLE_H

#include "types.h"
#include "pso/misc/TORockCave.h"

struct TORockCaveSimple : public TORockCave {
    virtual ~TORockCaveSimple();
    void play_trigger_effect();};

typedef char TORockCaveSimple_size[sizeof(TORockCaveSimple) == 0xB4 ? 1 : -1];
#endif
