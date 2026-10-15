#ifndef PSO_MISC_TTECREVERSER_H
#define PSO_MISC_TTECREVERSER_H

#include "types.h"

struct TTecReverser
{
    u32 m_1c;
    void* m_20;
    u8 _pad24[0x64];
    void* m_88;
    u8 _pad8C[0x28];
    u16 m_b4;
    u8 _padB6[0x36];
    u32 m_ec;
    u16 m_f0;
    void update();
    static void render();
    static void create(void *arg0, void *arg1, void *arg2, void *arg3);
    u8 is_active();
};

#endif
