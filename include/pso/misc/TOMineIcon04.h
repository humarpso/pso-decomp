#ifndef PSO_MISC_TOMINEICON04_H
#define PSO_MISC_TOMINEICON04_H

#include "types.h"

struct TOMineIcon04
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0x8];
    u32 m_30;
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x48];
    u32 m_84;
    u32 m_88;
    u32 m_8c;
    u8 _pad90[0x26C];
    void* m_2fc;
    u8 _pad300[0x26];
    u16 m_326;
    u8 _pad328[0x2C];
    u32 m_354;
    u8 _pad358[0x4];
    u16 m_35c;
    u8 _pad35E[0x16];
    u32 m_374;
    u32 m_378;
    void *create();
};

#endif
