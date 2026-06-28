#ifndef PSO_MISC_TWINDOWSUBCUSTOMEQUIP_H
#define PSO_MISC_TWINDOWSUBCUSTOMEQUIP_H

#include "types.h"

struct TWindowSubCustomEquip
{
    u8 _pad1C[0x4];
    s16 m_20;
    u8 _pad22[0x2];
    void* m_24;
    u8 _pad28[0x34];
    u32 m_5c;
    u8 m_60;
    u8 m_61;
    u8 m_62;
    u8 m_63;
    u8 m_64;
    u8 m_65;
    s16 m_66;
    u32 m_68;
    u32 m_6c;
};

#endif
