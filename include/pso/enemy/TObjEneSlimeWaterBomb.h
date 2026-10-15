#ifndef PSO_ENEMY_TOBJENESLIMEWATERBOMB_H
#define PSO_ENEMY_TOBJENESLIMEWATERBOMB_H

#include "types.h"

struct TObjEneSlimeWaterBomb
{
    u8 _pad1C[0x1C];
    u32 m_38;
    u32 m_3c;
    u32 m_40;
    u8 _pad44[0x1C];
    u32 m_60;
    u8 _pad64[0x1E4];
    void* m_248;
    u8 _pad24C[0x128];
    void* m_374;
    u8 _pad378[0x10];
    u32 m_388;
    u32 m_38c;
    u8 _pad390[0x4];
    u32 m_394;
    void render();
    void *create(void *arg1);
};

#endif
