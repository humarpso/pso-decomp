#ifndef PSO_MISC_TOMINEICON04_H
#define PSO_MISC_TOMINEICON04_H

#include "types.h"
#include "pso/misc/TOMine.h"

struct TOMineIcon04 : public TOMine {
    virtual ~TOMineIcon04();
    u32 m_374;
    u32 m_378;
    void *create();};

typedef char TOMineIcon04_size[sizeof(TOMineIcon04) == 0x37C ? 1 : -1];
#endif
