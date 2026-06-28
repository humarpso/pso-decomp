#ifndef PSO_MISC_TTECGRANTS_H
#define PSO_MISC_TTECGRANTS_H

#include "types.h"

struct TTecGrants
{
    u32 m_1c;
    u8 _pad20[0x58];
    s16 m_78;
    u8 _pad7A[0x3A];
    u16 m_b4;
    u8 _padB6[0x2];
    u32 m_b8;
    u8 _padBC[0x30];
    u32 m_ec;
    u16 m_f0;
    u8 _padF2[0x56];
    u32 m_148;
};

#endif
