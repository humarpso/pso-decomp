#ifndef PSO_MISC_TTECPLAYERINFLUENCE_H
#define PSO_MISC_TTECPLAYERINFLUENCE_H

#include "types.h"

struct TTecPlayerInfluence
{
    u32 m_1c;
    void* m_20;
    u8 _pad24[0x8];
    void* m_2c;
    u8 _pad30[0xC];
    void* m_3c;
    u8 _pad40[0x60];
    u32 m_a0;
    s16 m_a4;
    u16 m_a6;
    u16 m_a8;
    u8 _padAA[0x2];
    u32 m_ac;
    void* m_b0;
    u8 _padB4[0x10];
    u32 m_c4;
    u32 m_c8;
    u8 _padCC[0x10];
    u32 m_dc;
    void render();
    void tick_lifetime();
    void run_task();
};

#endif
