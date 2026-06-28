#ifndef PSO_MISC_TWINDOWSUBSYMBOLCHATPARTSSET_H
#define PSO_MISC_TWINDOWSUBSYMBOLCHATPARTSSET_H

#include "types.h"

struct TWindowSubSymbolChatPartsSet
{
    u8 _pad1C[0x4];
    s16 m_20;
    u8 _pad22[0x2];
    void* m_24;
    u8 _pad28[0x4];
    u32 m_2c;
    u8 _pad30[0x2C];
    u32 m_5c;
    u8 _pad60[0x8];
    u8 m_68;
    u8 _pad69[0x1];
    u16 m_6a;
    u16 m_6c;
    u16 m_6e;
    u32 m_70;
    u8 _pad74[0x8];
    u32 m_7c;
    u32 m_80;
    u8 _pad84[0x4];
    u32 m_88;
};

#endif
