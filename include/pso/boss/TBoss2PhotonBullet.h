#ifndef PSO_BOSS_TBOSS2PHOTONBULLET_H
#define PSO_BOSS_TBOSS2PHOTONBULLET_H

#include "types.h"
#include "pso/player/TUnk_804928CC.h"

struct TBoss2PhotonBullet : public TUnk_804928CC {
    virtual ~TBoss2PhotonBullet();
    void render();
    void run_task();
    void* m_cc;
    u8 _padD0[0x8];
    u32 m_d8;
    u32 m_dc;
    u8 _padE0[0x4];
    u32 m_e4;
    u8 unk_CC[0x1C];
};

typedef char TBoss2PhotonBullet_size[sizeof(TBoss2PhotonBullet) == 0xE8 ? 1 : -1];
#endif
