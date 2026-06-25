#ifndef PSO_TITEMSHOOTGUN_H
#define PSO_TITEMSHOOTGUN_H

#include "pso/TItemShootModel.h"
#include "types.h"

class TItemShootGun : public TItemShootModel {
public:
    virtual ~TItemShootGun();
    virtual void render();
    virtual void hook();
};

#endif
