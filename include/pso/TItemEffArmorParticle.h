#ifndef PSO_TITEMEFFARMORPARTICLE_H
#define PSO_TITEMEFFARMORPARTICLE_H

#include "pso/TObject.h"
#include "types.h"

class TItemEffArmorParticle : public TObject {
public:
    u8 _pad1C[0x4];
 void* m_20;

    virtual ~TItemEffArmorParticle();
    virtual void run_task();
};

#endif
