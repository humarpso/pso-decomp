#ifndef PSO_TITEMEFFBRINGER_H
#define PSO_TITEMEFFBRINGER_H

#include "pso/TItemShoot.h"
#include "types.h"
#include "dolphin/mtx.h"

class TItemEffBringer : public TItemShoot {
public:
 s32 m_particles[10];
 s32 m_particle_count;
 Vec m_84;

public:
    virtual ~TItemEffBringer();
    virtual void hook();
};

#endif
