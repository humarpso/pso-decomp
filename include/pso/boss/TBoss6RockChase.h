#ifndef PSO_BOSS_TBOSS6ROCKCHASE_H
#define PSO_BOSS_TBOSS6ROCKCHASE_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TBoss6RockChase : public TUnk_804AF8A0 {
    virtual ~TBoss6RockChase();
    u32 m_ac;
    u32 m_b0;
    u32 m_b4;
    u8 _padB8[0x4];
    u32 m_bc;
    u32 m_c0;
    u32 m_c4;
    s32 damage_players_in_range();
    virtual void render();
    virtual void run_task();};

typedef char TBoss6RockChase_size[sizeof(TBoss6RockChase) == 0xC8 ? 1 : -1];
#endif
