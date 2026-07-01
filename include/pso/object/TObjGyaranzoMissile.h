#ifndef PSO_OBJECT_TOBJGYARANZOMISSILE_H
#define PSO_OBJECT_TOBJGYARANZOMISSILE_H

#include "types.h"

struct TObjGyaranzoMissile
{
    u8 _pad1C[0xC];
    u16 m_28;
    u8 _pad2A[0xE];
    u32 m_38;
    u32 m_3c;
    u32 m_40;
    void* m_44;
    u8 _pad48[0x14];
    u32 m_5c;
    u32 m_60;
    u8 _pad64[0x40];
    u32 m_a4;
    u8 _padA8[0x4];
    void* m_ac;
    u8 _padB0[0x14];
    u16 m_c4;
    u8 _padC6[0x2];
    u32 m_c8;
    u32 m_cc;
    u32 m_d0;
    u8 _padD4[0x4];
    u16 m_d8;
};

#endif
