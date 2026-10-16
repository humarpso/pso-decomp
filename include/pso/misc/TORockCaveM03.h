#ifndef PSO_MISC_TOROCKCAVEM03_H
#define PSO_MISC_TOROCKCAVEM03_H

#include "types.h"
#include "pso/misc/TORockCave.h"

struct TORockCaveM03 : public TORockCave {
    virtual ~TORockCaveM03();};

typedef char TORockCaveM03_size[sizeof(TORockCaveM03) == 0xB4 ? 1 : -1];
#endif
