#ifndef PSO_ITEM_TOBJCONTAINERIDO_H
#define PSO_ITEM_TOBJCONTAINERIDO_H

#include "types.h"

struct TObjContainerIdo
{
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x4];
    void* m_38;
    u8 _pad3C[0x20];
    u32 m_5c;
    u32 m_60;
    u8 _pad64[0x20];
    u32 m_84;
    u32 m_88;
    u32 m_8c;
    u8 _pad90[0x24];
    void* m_b4;
    u8 _padB8[0x8];
    void* m_c0;
    u8 _padC4[0x18];
    u32 m_dc;
    u32 m_e0;
    u8 _padE4[0xC];
    void* m_f0;
    u8 _padF4[0x10];
    u32 m_104;
};

#endif
