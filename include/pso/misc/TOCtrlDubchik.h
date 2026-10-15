#ifndef PSO_MISC_TOCTRLDUBCHIK_H
#define PSO_MISC_TOCTRLDUBCHIK_H

#include "types.h"

struct TOCtrlDubchik
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x14];
    void* m_50;
    u8 _pad54[0xC];
    u32 m_60;
    u8 _pad64[0x1E4];
    void* m_248;
    u8 _pad24C[0x6C];
    u16 m_2b8;
    u8 _pad2BA[0x42];
    void* m_2fc;
    u8 _pad300[0x26];
    s16 m_326;
    u8 _pad328[0x4];
    u16 m_32c;
    u8 _pad32E[0x52];
    u32 m_380;
    u8 _pad384[0x8];
    u32 m_38c;
    void* m_390;
    u8 _pad394[0x8];
    u32 m_39c;
    void complete_and_destroy();
    void decay_timer_and_clear_flag();
    void decay_timer_and_finish();
    void run_task();
    static void *create(void *arg0);
    static void destroy_instance();
    static void load_shared_resource();
    static s32 create_font(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
};

#endif
