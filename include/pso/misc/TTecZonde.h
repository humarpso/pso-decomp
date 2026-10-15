#ifndef PSO_MISC_TTECZONDE_H
#define PSO_MISC_TTECZONDE_H

#include "types.h"

struct TTecZonde
{
    u32 m_1c;
    u8 _pad20[0xA6];
    s16 m_c6;
    u16 m_c8;
    u8 _padCA[0x66];
    u32 m_130;
    u16 m_134;
    static void render();
    void run_task();
};

#endif
