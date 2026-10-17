#ifndef PSO_MISC_TOROCKCAVEM02_H
#define PSO_MISC_TOROCKCAVEM02_H

#include "types.h"
#include "pso/misc/TORockCave.h"

struct TORockCaveM02 : public TORockCave {
    virtual ~TORockCaveM02();
};

typedef char TORockCaveM02_size[sizeof(TORockCaveM02) == 0xB4 ? 1 : -1];
#endif
