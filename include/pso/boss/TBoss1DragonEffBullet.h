#ifndef PSO_BOSS_TBOSS1DRAGONEFFBULLET_H
#define PSO_BOSS_TBOSS1DRAGONEFFBULLET_H

#include "types.h"
#include "pso/TObject.h"

struct TBoss1DragonEffBullet : public TObject {
    virtual ~TBoss1DragonEffBullet();
    void* m_1c;
    u8 _pad20[0x8];
    void* m_28;
    u8 _pad2C[0x8];
    u32 m_34;
    u32 m_38;
    u8 unk_3C[0x4];
    f32 m_40;
    u32 m_44;
    u32 m_48;
    virtual void render();
    virtual void run_task();
};

typedef char TBoss1DragonEffBullet_size[sizeof(TBoss1DragonEffBullet) == 0x4C ? 1 : -1];
#endif
