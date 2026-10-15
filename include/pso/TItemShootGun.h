#ifndef PSO_TITEMSHOOTGUN_H
#define PSO_TITEMSHOOTGUN_H

#include "pso/TItemShootModel.h"
#include "types.h"

class TItemShootGun : public TItemShootModel {
public:
 s32 m_6C;
 u32 m_70;

public:
    TItemShootGun(void* owner, const Vec* pos, const Vec* endpoint, f32 life);
    virtual ~TItemShootGun();
    virtual void render();
    virtual void hook();
public:
    static u32 create(s32 arg0, s32 arg1, s32 arg2, f32 farg0);
};

#endif
