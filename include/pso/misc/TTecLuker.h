#ifndef PSO_MISC_TTECLUKER_H
#define PSO_MISC_TTECLUKER_H

#include "types.h"

struct TTecLuker
{
    u32 m_1c;
    void* m_20;
    u8 _pad24[0x8];
    void* m_2c;
    u8 _pad30[0xC];
    void* m_3c;
    u8 _pad40[0x2C];
    u32 m_6c;
    u8 _pad70[0x44];
    u16 m_b4;
    u8 _padB6[0x36];
    u32 m_ec;
    u32 m_f0;
    s16 m_f4;
    u16 m_f6;
    u32 m_f8;
    void* m_fc;
    u8 _pad100[0x8];
    u32 m_108;
    u32 m_10c;
};

#endif
