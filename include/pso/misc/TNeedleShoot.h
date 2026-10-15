#ifndef PSO_MISC_TNEEDLESHOOT_H
#define PSO_MISC_TNEEDLESHOOT_H

#include "types.h"

struct TNeedleShoot
{
    u32 m_1c;
    u8 _pad20[0x14];
    u16 m_34;
    u8 _pad36[0x6];
    void* m_3c;
    u8 _pad40[0x10];
    u32 m_50;
    u32 m_54;
    u8 _pad58[0x10];
    u32 m_68;
    void* m_6c;
    u8 _pad70[0x24];
    void* m_94;
    u8 _pad98[0x8];
    u32 m_a0;
    u32 m_a4;
    u32 m_a8;
    u8 _padAC[0x4];
    u32 m_b0;
    u8 _padB4[0x4];
    u32 m_b8;
    void run_task();
    void render();
    void update_position();
    int queue_destruction();
    void tick_lifetime();
    void init_velocity();
};

#endif
