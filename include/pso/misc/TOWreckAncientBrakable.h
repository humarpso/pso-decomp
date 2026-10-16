#ifndef PSO_MISC_TOWRECKANCIENTBRAKABLE_H
#define PSO_MISC_TOWRECKANCIENTBRAKABLE_H

#include "types.h"
#include "pso/misc/TOWreckAncient.h"

struct TOWreckAncientBrakable : public TOWreckAncient {
    virtual ~TOWreckAncientBrakable();
    u32 m_b4;
    u32 m_b8;
    void spawn_debris();
    void update_break_state();};

typedef char TOWreckAncientBrakable_size[sizeof(TOWreckAncientBrakable) == 0xBC ? 1 : -1];
#endif
