#ifndef PSO_TITEMSHOOTMODEL_H
#define PSO_TITEMSHOOTMODEL_H
#include "pso/TItemShoot.h"
#include "types.h"

class TItemShootModel : public TItemShoot {
public:
 void* m_58;
 void* m_5C;
 s32   m_60;
 s32   m_64;
 s32   m_68;

public:
    TItemShootModel(void* owner, const Vec* pos, const Vec* dir, f32 life);
    virtual ~TItemShootModel();
    virtual void render();
};

#endif
