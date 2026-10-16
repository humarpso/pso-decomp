#ifndef PSO_MISC_TOTRAPCHAINSAWEDGE_H
#define PSO_MISC_TOTRAPCHAINSAWEDGE_H

#include "types.h"
#include "pso/misc/TOTrapChainSaw.h"

struct TOTrapChainSawEdge : public TOTrapChainSaw {
    virtual ~TOTrapChainSawEdge();
    u8 unk_F8[0x10];
};

typedef char TOTrapChainSawEdge_size[sizeof(TOTrapChainSawEdge) == 0x108 ? 1 : -1];
#endif
