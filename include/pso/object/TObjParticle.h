#ifndef PSO_OBJECT_TOBJPARTICLE_H
#define PSO_OBJECT_TOBJPARTICLE_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjParticle : public TUnk_804B9870 {
    virtual ~TObjParticle();
    u32 m_90;
    u32 m_94;
    virtual void render();
    virtual void run_task();};

typedef char TObjParticle_size[sizeof(TObjParticle) == 0x98 ? 1 : -1];
#endif
