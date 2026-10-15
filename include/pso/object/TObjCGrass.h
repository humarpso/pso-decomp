#ifndef PSO_OBJECT_TOBJCGRASS_H
#define PSO_OBJECT_TOBJCGRASS_H

#include "types.h"

struct TObjCGrass
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x8];
    void* m_44;
    u8 _pad48[0x90];
    u32 m_d8;
    u32 m_dc;
    u8 _padE0[0x18];
    u32 m_f8;
    u32 m_fc;
    u8 _pad100[0x4];
    u32 m_104;
    u32 m_108;
    void* m_10c;
    void render();
    void run_task();
    static void release_global_805D5130();
    static void load_resources();
};

#endif
