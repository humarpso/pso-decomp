#ifndef PSO_TITEMSHOOTMODELROTZ_H
#define PSO_TITEMSHOOTMODELROTZ_H

#include "pso/TItemShootModel.h"
#include "types.h"

class TItemShootModelRotZ : public TItemShootModel {
public:
    virtual ~TItemShootModelRotZ();
    virtual void render();
    virtual void hook();
};

#endif
