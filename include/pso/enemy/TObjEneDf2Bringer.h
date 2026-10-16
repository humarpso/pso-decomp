#ifndef PSO_ENEMY_TOBJENEDF2BRINGER_H
#define PSO_ENEMY_TOBJENEDF2BRINGER_H

#include "types.h"

struct TObjEneDf2Bringer
{
    void vfunc_63();
    void vfunc_62();
    void vfunc_61();
    void vfunc_28();
    void render();
    void run_task();
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x74];
    u32 m_d8;
    u32 m_dc;
    u8 _padE0[0x21C];
    void* m_2fc;
    u8 _pad300[0x26];
    s16 m_326;
    u8 _pad328[0x98];
    u32 m_3c0;
    void* m_3c4;
    u8 _pad3C8[0x10];
    u32 m_3d8;
    u8 _pad3DC[0x4];
    void* m_3e0;
    u8 _pad3E4[0x6C];
    void* m_450;
    u8 _pad454[0x2C];
    u32 m_480;
    u8 _pad484[0x4];
    u32 m_488;
    u8 _pad48C[0x8];
    u32 m_494;
    u8 _pad498[0x10];
    u32 m_4a8;
    void exec(s32 arg1);
    void handle_state(s32 arg1);
    s32 check_stage_advance();
    void init_enemy();
    static void set_entry_value_clamped(s32 arg0, f32 farg0);
    static void free_resources();
    void *create();
    static void load_resources();
};

#endif
