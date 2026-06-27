#ifndef PSO_MISC_TPLYPHOTONCHAIR_H
#define PSO_MISC_TPLYPHOTONCHAIR_H

#include "types.h"

struct TPlyPhotonChair
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0x10];
    void* m_38;
    u8 _pad3C[0x20];
    void* m_5c;
    u32 m_60;
    u8 _pad64[0x4];
    void* m_68;
    u8 _pad6C[0x26];
    u16 m_92;
    u32 m_94;
    void* m_98;
    u32 m_9c;
    u8 _padA0[0x14];
    void* m_b4;
    u32 m_b8;
    u8 _padBC[0x14];
    void* m_d0;
};

#endif
