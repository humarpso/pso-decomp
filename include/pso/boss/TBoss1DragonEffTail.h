#ifndef PSO_BOSS_TBOSS1DRAGONEFFTAIL_H
#define PSO_BOSS_TBOSS1DRAGONEFFTAIL_H

#include "types.h"
#include "pso/player/TUnk_804928CC.h"

struct TBoss1DragonEffTail : public TUnk_804928CC {
    virtual ~TBoss1DragonEffTail();
    virtual void run_task();
    u32 m_b0;
    u32 m_b4;
    u32 m_b8;
    u32 m_bc;
    void* m_c0;
    virtual void render();
    void enable();
    void disable();
    int is_visible();
    u8 unk_C4[0x8];
};

typedef char TBoss1DragonEffTail_size[sizeof(TBoss1DragonEffTail) == 0xCC ? 1 : -1];
#endif
