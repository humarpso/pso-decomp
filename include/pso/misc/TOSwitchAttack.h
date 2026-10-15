#ifndef PSO_MISC_TOSWITCHATTACK_H
#define PSO_MISC_TOSWITCHATTACK_H

#include "types.h"

struct TOSwitchAttack
{
    u8 _pad1C[0x1C];
    u32 m_38;
    u32 m_3c;
    u32 m_40;
    u8 _pad44[0x58];
    u32 m_9c;
    u16 m_a0;
    u16 m_a2;
    u16 m_a4;
    u8 m_a6;
    u8 m_a7;
    u32 m_a8;
    static void create_sub(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0);
    void init_params();
    static void render();
    void run_task();
    static void *create(void *arg0);
};

#endif
