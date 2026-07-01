#ifndef PSO_OBJECT_TOBJDOORKEY_H
#define PSO_OBJECT_TOBJDOORKEY_H

#include "types.h"

struct TObjDoorKey
{
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x4];
    u32 m_38;
    u32 m_3c;
    u32 m_40;
    u8 _pad44[0x30];
    void* m_74;
    u8 _pad78[0x14];
    u32 m_8c;
    u8 _pad90[0x8];
    void* m_98;
    u8 _pad9C[0x38];
    u32 m_d4;
    u8 _padD8[0x10];
    u32 m_e8;
    u32 m_ec;
    u32 m_f0;
    u32 m_f4;
    u32 m_f8;
};

#endif
