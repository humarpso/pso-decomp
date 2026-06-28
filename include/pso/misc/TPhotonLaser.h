#ifndef PSO_MISC_TPHOTONLASER_H
#define PSO_MISC_TPHOTONLASER_H

#include "types.h"

struct TPhotonLaser
{
    u8 _pad1C[0x318];
    void* m_334;
    u8 _pad338[0x8];
    void* m_340;
    u8 _pad344[0x8];
    void* m_34c;
    u8 _pad350[0x14];
    u32 m_364;
    u8 _pad368[0x4];
    u32 m_36c;
    u16 m_370;
};

#endif
