#ifndef PSO_ITEM_TOBJCONTAINERJUNGENEMY_H
#define PSO_ITEM_TOBJCONTAINERJUNGENEMY_H

#include "types.h"

struct TObjContainerJungEnemy
{
    u16 m_1c;
    u8 _pad1E[0x6];
    u32 m_24;
    u8 _pad28[0x8];
    u32 m_30;
    u8 _pad34[0x4];
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x10];
    void* m_74;
    u8 _pad78[0x8];
    u32 m_80;
    u32 m_84;
    u8 _pad88[0x274];
    void* m_2fc;
    u8 _pad300[0x26];
    s16 m_326;
    u8 _pad328[0x3C];
    u32 m_364;
    u32 m_368;
    u32 m_36c;
    u32 m_370;
    u32 m_374;
};

#endif
