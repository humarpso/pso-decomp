#ifndef PSO_MISC_TOROCKCAVEL03_H
#define PSO_MISC_TOROCKCAVEL03_H

#include "types.h"
#include "pso/misc/TORockCave.h"

struct TORockCaveL03 : public TORockCave {
    virtual ~TORockCaveL03();
};

typedef char TORockCaveL03_size[sizeof(TORockCaveL03) == 0xB4 ? 1 : -1];
#endif
