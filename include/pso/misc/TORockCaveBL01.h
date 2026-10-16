#ifndef PSO_MISC_TOROCKCAVEBL01_H
#define PSO_MISC_TOROCKCAVEBL01_H

#include "types.h"
#include "pso/misc/TORockCaveBrakable.h"

struct TORockCaveBL01 : public TORockCaveBrakable {
    virtual ~TORockCaveBL01();};

typedef char TORockCaveBL01_size[sizeof(TORockCaveBL01) == 0xBC ? 1 : -1];
#endif
