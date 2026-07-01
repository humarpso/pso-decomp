#ifndef PSO_MISC_TOBIND_H
#define PSO_MISC_TOBIND_H

#include "types.h"

struct TOBind
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0x8];
    u32 m_30;
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x20];
    u32 m_84;
    u8 _pad88[0x28];
    u32 m_b0;
    u32 m_b4;
    u8 _padB8[0xC];
    u32 m_c4;
    u32 m_c8;
    u32 m_cc;
};

#endif
