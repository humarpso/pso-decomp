#ifndef PSO_TBOSS5GRYPHONLIGHTNINGEFF_H
#define PSO_TBOSS5GRYPHONLIGHTNINGEFF_H
#include "pso/TTecZondeEff.h"
#include "types.h"

class TBoss5GryphonLightningEff : public TTecZondeEff {
public:
    virtual ~TBoss5GryphonLightningEff();
    virtual void run_task();
    virtual void render();
public:
    s32 calc_segment_uvs(void *p_);
};

#endif
