#ifndef PSO_TITEMSHOOT_H
#define PSO_TITEMSHOOT_H

#include "pso/TObject.h"
#include "types.h"
#include "dolphin/mtx.h"

class TItemShoot : public TObject {
public:
 Vec m_pos;
 s32 m_28;
 s32 m_count;
 s32 m_30;
 f32 m_life;
 Vec m_dir;
 Vec m_44;
 TObject* m_50;
 void* m_54;

public:
    TItemShoot(void* owner, const Vec* pos, const Vec* dir, f32 life);
    virtual ~TItemShoot();
    virtual void run_task();
    virtual void hook();
};

#endif
