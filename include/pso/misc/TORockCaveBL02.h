#ifndef PSO_MISC_TOROCKCAVEBL02_H
#define PSO_MISC_TOROCKCAVEBL02_H

#include "types.h"
#include "pso/misc/TORockCaveBrakable.h"

struct TORockCaveBL02 : public TORockCaveBrakable {
    virtual ~TORockCaveBL02();};

typedef char TORockCaveBL02_size[sizeof(TORockCaveBL02) == 0xBC ? 1 : -1];
#endif
