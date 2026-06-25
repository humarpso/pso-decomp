#ifndef PSO_TITEMSHOOTGUN_H
#define PSO_TITEMSHOOTGUN_H

#include "pso/TItemShootModel.h"
#include "types.h"

class TItemShootGun : public TItemShootModel {
public:
 s32 m_6C;
 u32 m_70;

public:
    virtual ~TItemShootGun();
    virtual void render();
    virtual void hook();
};

#endif
