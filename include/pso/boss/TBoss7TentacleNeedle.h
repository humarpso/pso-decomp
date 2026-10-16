#ifndef PSO_BOSS_TBOSS7TENTACLENEEDLE_H
#define PSO_BOSS_TBOSS7TENTACLENEEDLE_H

#include "types.h"
#include "pso/TObject.h"

struct TBoss7TentacleNeedle : public TObject {
    virtual ~TBoss7TentacleNeedle();
    void* m_1c;
    u8 _pad20[0x8];
    u32 m_28;
    u32 m_2c;
    u32 m_30;
    u8 _pad34[0x4];
    u32 m_38;
    u32 m_3c;
    u32 m_40;
    u8 _pad44[0x34];
    u32 m_78;
    void render();
    void run_task();};

typedef char TBoss7TentacleNeedle_size[sizeof(TBoss7TentacleNeedle) == 0x7C ? 1 : -1];
#endif
