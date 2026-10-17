#ifndef PSO_MISC_TOROCKCAVEL01_H
#define PSO_MISC_TOROCKCAVEL01_H

#include "types.h"
#include "pso/misc/TORockCave.h"

struct TORockCaveL01 : public TORockCave {
    virtual ~TORockCaveL01();
};

typedef char TORockCaveL01_size[sizeof(TORockCaveL01) == 0xB4 ? 1 : -1];
#endif
