#ifndef PSO_OBJECT_TOBJDFDEMO5_H
#define PSO_OBJECT_TOBJDFDEMO5_H

#include "types.h"

struct TObjDFDemo5
{
    u8 _pad1C[0xAC];
    u32 m_c8;
    u32 m_cc;
    u32 m_d0;
    void* m_d4;
    u8 _padD8[0x8];
    u32 m_e0;
    u32 m_e4;
    u8 _padE8[0x4];
    u32 m_ec;
    void* m_f0;
    u8 _padF4[0x14];
    u32 m_108;
    void* m_10c;
    static void *create(void *arg0, void *arg1, void *arg2);
};

#endif
