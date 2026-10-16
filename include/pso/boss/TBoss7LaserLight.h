#ifndef PSO_BOSS_TBOSS7LASERLIGHT_H
#define PSO_BOSS_TBOSS7LASERLIGHT_H

#include "types.h"
#include "pso/TObject.h"

struct TBoss7LaserLight : public TObject {
    virtual ~TBoss7LaserLight();
    u32 m_1c;
    u32 m_20;
    u32 m_24;
    void* m_28;
    u8 _pad2C[0xC];
    void* m_38;
    u8 _pad3C[0x4];
    u32 m_40;
    static void render();
    void run_task();};

typedef char TBoss7LaserLight_size[sizeof(TBoss7LaserLight) == 0x44 ? 1 : -1];
#endif
