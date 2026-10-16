#ifndef PSO_ENEMY_TOBJENERECONBOMB_H
#define PSO_ENEMY_TOBJENERECONBOMB_H

#include "types.h"
#include "pso/player/TUnk_804806E8.h"

struct TObjEneReconBomb : public TUnk_804806E8 {
    virtual ~TObjEneReconBomb();
    u32 m_334;
    u16 m_338;
    u8 _pad33A[0x2];
    void* m_33c;
    u8 _pad340[0x18];
    u32 m_358;
    u32 m_35c;
    u32 m_360;
    virtual void render();
    virtual void run_task();};

typedef char TObjEneReconBomb_size[sizeof(TObjEneReconBomb) == 0x364 ? 1 : -1];
#endif
