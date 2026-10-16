#ifndef PSO_ENEMY_TOBJENESAVER_H
#define PSO_ENEMY_TOBJENESAVER_H

#include "types.h"
#include "pso/enemy/TObjEnemy.h"

struct TObjEneSaver : public TObjEnemy {
    virtual ~TObjEneSaver();
    virtual void*vfunc_9();
    virtual void vfunc_58();
    virtual void vfunc_59();
    virtual void vfunc_60();
    virtual void vfunc_62();
    void* m_390;
    u8 _pad394[0x8];
    u32 m_39c;
    u32 m_3a0;
    void* m_3a4;
    u8 _pad3A8[0x18];
    u32 m_3c0;
    u32 m_3c4;
    u32 m_3c8;
    u8 unk_3B0[0x1C];
};

typedef char TObjEneSaver_size[sizeof(TObjEneSaver) == 0x3CC ? 1 : -1];
#endif
