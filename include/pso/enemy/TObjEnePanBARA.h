#ifndef PSO_ENEMY_TOBJENEPANBARA_H
#define PSO_ENEMY_TOBJENEPANBARA_H
#include "types.h"
#include "pso/enemy/TObjEnemy.h"

class TObjEnePanBARA : public TObjEnemy {
public:
    virtual ~TObjEnePanBARA();
    virtual void vfunc_63();
    virtual void vfunc_62();
    virtual void vfunc_61();
    u8 unk_374[0x4];
    s32 m_378;
    u8 unk_37C[0x4];
    s32 m_380;
    u8 unk_384[0x18];
    u8 * m_39c;
    u8 unk_3A0[0xD0];
};

#endif
