#ifndef PSO_OBJECT_TOBJMOTION_H
#define PSO_OBJECT_TOBJMOTION_H

#include "types.h"

struct TObjMotion
{
    u8 _pad1C[0x90];
    u32 m_ac;
    u8 _padB0[0x28];
    u32 m_d8;
    u32 m_dc;
    u32 m_e0;
    u8 _padE4[0x14];
    u32 m_f8;
};

#endif
