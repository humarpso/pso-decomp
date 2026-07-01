#ifndef PSO_MISC_TTECRAFOIE_H
#define PSO_MISC_TTECRAFOIE_H

#include "types.h"

struct TTecRaFoie
{
    u32 m_1c;
    u8 _pad20[0x5A];
    s16 m_7a;
    void* m_7c;
    u8 _pad80[0x34];
    u16 m_b4;
    u8 _padB6[0x2];
    u32 m_b8;
    u8 _padBC[0x2C];
    u32 m_e8;
    u32 m_ec;
    u16 m_f0;
    u8 _padF2[0x56];
    u32 m_148;
};

#endif
