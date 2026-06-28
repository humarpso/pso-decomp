#ifndef PSO_MISC_TTECSLICER_H
#define PSO_MISC_TTECSLICER_H

#include "types.h"

struct TTecSlicer
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0x10];
    void* m_38;
    u8 _pad3C[0x20];
    u32 m_5c;
    u32 m_60;
    u32 m_64;
    void* m_68;
    u8 _pad6C[0x24];
    void* m_90;
    u8 _pad94[0x8];
    void* m_9c;
    u8 _padA0[0x8];
    void* m_a8;
    u8 _padAC[0x14];
    void* m_c0;
    u16 m_c4;
    u8 m_c6;
    u8 _padC7[0x1];
    void* m_c8;
    u8 _padCC[0x1C];
    void* m_e8;
    u8 _padEC[0x1C];
    u32 m_108;
    u32 m_10c;
    u32 m_110;
    u16 m_114;
    u8 _pad116[0x2];
    u32 m_118;
    u16 m_11c;
    u16 m_11e;
    u8 _pad120[0x4];
    u32 m_124;
    void* m_128;
    u8 _pad12C[0xC];
    u32 m_138;
    u32 m_13c;
};

#endif
