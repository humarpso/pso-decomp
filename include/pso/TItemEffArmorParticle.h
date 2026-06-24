#ifndef PSO_TITEMEFFARMORPARTICLE_H
#define PSO_TITEMEFFARMORPARTICLE_H

#include "pso/TObject.h"
#include "types.h"

class TItemEffArmorParticle : public TObject {
public:
    virtual ~TItemEffArmorParticle();
    virtual void run_task();
};

#endif
