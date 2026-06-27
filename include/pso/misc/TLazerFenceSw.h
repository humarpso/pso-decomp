#ifndef PSO_MISC_TLAZERFENCESW_H
#define PSO_MISC_TLAZERFENCESW_H

#include "types.h"

struct TLazerFenceSw
{
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x4];
    void* m_38;
    u8 _pad3C[0x50];
    u32 m_8c;
    u8 _pad90[0x58];
    u16 m_e8;
    u8 _padEA[0x6];
    void* m_f0;
    u8 _padF4[0x10];
    u32 m_104;
    u8 _pad108[0xC];
    u32 m_114;
};

#endif
