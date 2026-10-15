#ifndef PSO_BOSS_TBOSS6ROCKCHASE_H
#define PSO_BOSS_TBOSS6ROCKCHASE_H

#include "types.h"

struct TBoss6RockChase
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x20];
    u32 m_5c;
    u32 m_60;
    u32 m_64;
    u8 _pad68[0x44];
    u32 m_ac;
    u32 m_b0;
    u32 m_b4;
    u8 _padB8[0x4];
    u32 m_bc;
    u32 m_c0;
    u32 m_c4;
    s32 damage_players_in_range();
    void render();
    void run_task();
};

#endif
