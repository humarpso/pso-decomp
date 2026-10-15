#ifndef PSO_OBJECT_TOBJCOMPUTER_H
#define PSO_OBJECT_TOBJCOMPUTER_H

#include "types.h"

struct TObjComputer
{
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x54];
    u32 m_88;
    u8 _pad8C[0xC];
    void* m_98;
    u8 _pad9C[0x18];
    u32 m_b4;
    u8 _padB8[0x4];
    u32 m_bc;
    u8 _padC0[0x4];
    u32 m_c4;
    s32 draw_model();
    void render();
    void *create();
    static void free_resources();
};

#endif
