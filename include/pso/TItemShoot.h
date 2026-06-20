#ifndef PSO_TITEMSHOOT_H
#define PSO_TITEMSHOOT_H

#include "pso/TObject.h"
#include "types.h"
#include "dolphin/mtx.h"

class TItemShoot : public TObject {
public:
 Vec m_pos;
 u8 _pad28[0x04];
 s32 m_count;
 u8 _pad30[0x04];
 f32 m_life;
 Vec m_dir;
 Vec m_44;
 TObject* m_50;
 void* m_54;

public:
    virtual ~TItemShoot();
    virtual void run_task();
    virtual void hook();
};

#endif
