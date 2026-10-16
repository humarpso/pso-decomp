#ifndef PSO_MISC_TOROCKCAVEBRAKABLE_H
#define PSO_MISC_TOROCKCAVEBRAKABLE_H

#include "types.h"
#include "pso/misc/TORockCave.h"

struct TORockCaveBrakable : public TORockCave {
    virtual ~TORockCaveBrakable();
    u32 m_b4;
    u32 m_b8;
    void spawn_debris();
    void spawn_break_effect();
    void update_break_state();};

typedef char TORockCaveBrakable_size[sizeof(TORockCaveBrakable) == 0xBC ? 1 : -1];
#endif
