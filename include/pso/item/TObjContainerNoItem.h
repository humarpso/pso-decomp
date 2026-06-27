#ifndef PSO_ITEM_TOBJCONTAINERNOITEM_H
#define PSO_ITEM_TOBJCONTAINERNOITEM_H

#include "types.h"

struct TObjContainerNoItem
{
    u16 m_1c;
    u8 _pad1E[0x12];
    u32 m_30;
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x10];
    void* m_74;
    u8 _pad78[0x8];
    u32 m_80;
    u8 _pad84[0x278];
    void* m_2fc;
    u8 _pad300[0x26];
    s16 m_326;
    u8 _pad328[0x3C];
    u32 m_364;
};

#endif
