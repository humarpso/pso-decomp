#ifndef PSO_OBJECT_TOBJLAZERFENCEEXTRA_H
#define PSO_OBJECT_TOBJLAZERFENCEEXTRA_H

#include "types.h"

struct TObjLazerFenceExtra
{
    void render();
    void run_task();
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x50];
    u32 m_84;
    u8 _pad88[0x4];
    u32 m_8c;
    u8 _pad90[0x14];
    u32 m_a4;
    u32 m_a8;
    u32 m_ac;
    u16 m_b0;
    u8 _padB2[0x2];
    u32 m_b4;
    u8 _padB8[0x20];
    u32 m_d8;
};

#endif
