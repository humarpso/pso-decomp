#ifndef PSO_BOSS_TBOSS6MAG_H
#define PSO_BOSS_TBOSS6MAG_H

#include "types.h"
#include "pso/enemy/TObjEnemy.h"

struct TBoss6Mag : public TObjEnemy {
    virtual ~TBoss6Mag();
    void render();
    void run_task();
    u32 m_390;
    u8 _pad394[0x2C];
    u32 m_3a4;
    u8 _pad3C4[0x44];
    void* m_3ec;
    u8 _pad40C[0x40];
    void* m_430;
    u8 _pad450[0x8];
    u32 m_43c;
    u8 unk_440[0x1C];
};

#endif
