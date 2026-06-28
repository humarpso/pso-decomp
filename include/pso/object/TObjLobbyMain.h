#ifndef PSO_OBJECT_TOBJLOBBYMAIN_H
#define PSO_OBJECT_TOBJLOBBYMAIN_H

#include "types.h"

struct TObjLobbyMain
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x64];
    u32 m_c8;
    u8 _padCC[0x4];
    s16 m_d0;
    u8 _padD2[0x6];
    u32 m_d8;
    u32 m_dc;
};

#endif
