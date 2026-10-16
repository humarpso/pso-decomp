#ifndef PSO_BOSS_TBOSS1DRAGONEFFBREATH_H
#define PSO_BOSS_TBOSS1DRAGONEFFBREATH_H

#include "types.h"
#include "pso/TObject.h"

struct TBoss1DragonEffBreath : public TObject {
    virtual ~TBoss1DragonEffBreath();
    void* m_1c;
    u8 _pad20[0x8];
    void* m_28;
    u8 _pad2C[0x8];
    u32 m_34;
    static void render();
    void run_task();};

typedef char TBoss1DragonEffBreath_size[sizeof(TBoss1DragonEffBreath) == 0x38 ? 1 : -1];
#endif
