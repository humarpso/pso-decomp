#ifndef PSO_MISC_TOCHATSENSOR_H
#define PSO_MISC_TOCHATSENSOR_H

#include "types.h"

struct TOChatSensor
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x54];
    u32 m_90;
    u16 m_94;
    u8 _pad96[0xA];
    u32 m_a0;
    u8 _padA4[0x20];
    u32 m_c4;
    u32 m_c8;
    u32 m_cc;
};

#endif
