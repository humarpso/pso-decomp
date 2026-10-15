#ifndef PSO_MISC_TMOTORCYCLE_H
#define PSO_MISC_TMOTORCYCLE_H

#include "types.h"

struct TMotorcycle
{
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x4];
    void* m_38;
    u8 _pad3C[0x20];
    u32 m_5c;
    u32 m_60;
    u32 m_64;
    u8 _pad68[0x54];
    u32 m_bc;
    void render();
    void *create();
    static void free_statics();
    static void load_resources();
    static void add_entry(s16 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
};

#endif
