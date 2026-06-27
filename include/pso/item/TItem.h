#ifndef PSO_ITEM_TITEM_H
#define PSO_ITEM_TITEM_H

#include "types.h"

struct TItem
{
    u8 _pad1C[0x7C];
    void* m_98;
    u8 _pad9C[0x10];
    void* m_ac;
    u8 _padB0[0x28];
    u32 m_d8;
    u32 m_dc;
    u32 m_e0;
    u16 m_e4;
    u16 m_e6;
    u16 m_e8;
    u8 m_ea;
    u8 _padEB[0x1];
    u8 m_ec;
    u8 m_ed;
    u8 m_ee;
    u8 _padEF[0x1];
    u32 m_f0;
    u32 m_f4;
};

#endif
