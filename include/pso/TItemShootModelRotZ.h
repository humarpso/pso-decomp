#ifndef PSO_TITEMSHOOTMODELROTZ_H
#define PSO_TITEMSHOOTMODELROTZ_H

#include "pso/TItemShootModel.h"
#include "types.h"

class TItemShootModelRotZ : public TItemShootModel {
public:
    TItemShootModelRotZ(void* owner, const Vec* pos, const Vec* dir, f32 life);
    virtual ~TItemShootModelRotZ();
    virtual void render();
    virtual void hook();
};

#endif
