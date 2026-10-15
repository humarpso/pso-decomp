#ifndef PSO_MISC_TWINDOWSUBSYMBOLCHATPARTS_H
#define PSO_MISC_TWINDOWSUBSYMBOLCHATPARTS_H

#include "types.h"

struct TWindowSubSymbolChatParts
{
    u8 _pad1C[0x4];
    s16 m_20;
    u8 _pad22[0xA];
    u32 m_2c;
    u8 _pad30[0x2C];
    u32 m_5c;
    u8 _pad60[0x8];
    void* m_68;
    u8 _pad6C[0x4];
    u8 m_70;
    u8 m_71;
    u8 m_72;
    u8 m_73;
    u8 _pad74[0x2];
    u16 m_76;
    u8 _pad78[0x4];
    u32 m_7c;
    u32 m_80;
    u8 _pad84[0x4];
    u32 m_88;
    u32 m_8c;
    void handle_cancel();
    void add_part();
    void handle_add();
};

#endif
