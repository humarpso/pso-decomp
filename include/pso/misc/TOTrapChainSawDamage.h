#ifndef PSO_MISC_TOTRAPCHAINSAWDAMAGE_H
#define PSO_MISC_TOTRAPCHAINSAWDAMAGE_H

#include "types.h"
#include "pso/misc/TOTrapChainSaw.h"

struct TOTrapChainSawDamage : public TOTrapChainSaw {
    virtual ~TOTrapChainSawDamage();
    u32 m_f8;
    u8 _padFC[0x4];
    u32 m_100;
    u32 m_104;
    u32 m_108;
    void set_damage(s32 v);
    void *create();};

typedef char TOTrapChainSawDamage_size[sizeof(TOTrapChainSawDamage) == 0x10C ? 1 : -1];
#endif
