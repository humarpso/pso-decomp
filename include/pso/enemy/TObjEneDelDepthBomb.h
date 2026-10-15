#ifndef PSO_ENEMY_TOBJENEDELDEPTHBOMB_H
#define PSO_ENEMY_TOBJENEDELDEPTHBOMB_H

#include "types.h"

struct TObjEneDelDepthBomb
{
    u8 _pad1C[0x1C];
    u32 m_38;
    u32 m_3c;
    u32 m_40;
    u8 _pad44[0x18];
    u32 m_5c;
    u32 m_60;
    u32 m_64;
    u8 _pad68[0x1E0];
    void* m_248;
    u8 _pad24C[0xE8];
    void* m_334;
    u8 _pad338[0x10];
    u32 m_348;
    u32 m_34c;
    u32 m_350;
    f32 get_depth_radius();
};

#endif
