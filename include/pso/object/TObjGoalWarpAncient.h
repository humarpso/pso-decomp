#ifndef PSO_OBJECT_TOBJGOALWARPANCIENT_H
#define PSO_OBJECT_TOBJGOALWARPANCIENT_H

#include "types.h"

struct TObjGoalWarpAncient
{
    void render();
    void run_task();
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x28];
    u32 m_8c;
    u8 _pad90[0x30];
    u32 m_c0;
    u8 _padC4[0x8];
    u32 m_cc;
    u32 m_d0;
    u32 m_d4;
    u32 m_d8;
    u32 m_dc;
    u32 m_e0;
    u32 m_e4;
    u32 m_e8;
    static void load_resources();
    static void register_warp_object(void* a0);
    static s32 get_instance();
    static void register_warp(void* a0);
};

#endif
