#ifndef PSO_MISC_TRADERMAPCORE_H
#define PSO_MISC_TRADERMAPCORE_H

#include "types.h"

struct TRaderMapCore
{
    u8 _pad1C[0x74];
    u32 m_90;
    u8 _pad94[0xA0];
    u32 m_134;
    u8 _pad138[0x30];
    u32 m_168;
    u32 m_16c;
    u8 _pad170[0x4];
    u32 m_174;
    u32 m_178;
    u32 m_17c;
    u32 m_180;
    u32 m_184;
    u8 _pad188[0xC];
    u32 m_194;
    u32 m_198;
};

#endif
