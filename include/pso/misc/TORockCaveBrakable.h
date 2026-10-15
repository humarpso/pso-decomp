#ifndef PSO_MISC_TOROCKCAVEBRAKABLE_H
#define PSO_MISC_TOROCKCAVEBRAKABLE_H

#include "types.h"

struct TORockCaveBrakable
{
    u8 _pad1C[0x98];
    u32 m_b4;
    u32 m_b8;
    void spawn_debris();
    void spawn_break_effect();
    void update_break_state();
};

#endif
