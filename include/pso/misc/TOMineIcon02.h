#ifndef PSO_MISC_TOMINEICON02_H
#define PSO_MISC_TOMINEICON02_H

#include "types.h"
#include "pso/misc/TOMine.h"

struct TOMineIcon02 : public TOMine {
    virtual ~TOMineIcon02();
    u32 m_374;
    u32 m_378;
    void *create();};

typedef char TOMineIcon02_size[sizeof(TOMineIcon02) == 0x37C ? 1 : -1];
#endif
