#ifndef PSO_ITEM_TOBJCONTAINERJUNGEX_H
#define PSO_ITEM_TOBJCONTAINERJUNGEX_H

#include "types.h"

struct TObjContainerJungEx
{
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x4];
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x10];
    void* m_74;
    u8 _pad78[0x284];
    void* m_2fc;
    u8 _pad300[0x26];
    s16 m_326;
    u8 _pad328[0x3C];
    u32 m_364;
};

#endif
