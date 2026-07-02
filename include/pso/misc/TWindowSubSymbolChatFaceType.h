#ifndef PSO_MISC_TWINDOWSUBSYMBOLCHATFACETYPE_H
#define PSO_MISC_TWINDOWSUBSYMBOLCHATFACETYPE_H

#include "types.h"

struct TWindowSubSymbolChatFaceType
{
    u8 _pad1C[0x4];
    s16 m_20;
    u8 _pad22[0x2];
    void* m_24;
    u8 _pad28[0x4];
    u32 m_2c;
    u8 _pad30[0x2C];
    u32 m_5c;
    u8 m_60;
    u8 m_61;
    u8 m_62;
    u8 _pad63[0x1];
    u32 m_64;
    u32 m_68;
};

#endif
