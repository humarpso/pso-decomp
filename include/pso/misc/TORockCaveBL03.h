#ifndef PSO_MISC_TOROCKCAVEBL03_H
#define PSO_MISC_TOROCKCAVEBL03_H

#include "types.h"
#include "pso/misc/TORockCaveBrakable.h"

struct TORockCaveBL03 : public TORockCaveBrakable {
    virtual ~TORockCaveBL03();};

typedef char TORockCaveBL03_size[sizeof(TORockCaveBL03) == 0xBC ? 1 : -1];
#endif
