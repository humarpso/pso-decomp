#ifndef PSO_MISC_TCONTAINERANCIENT01_H
#define PSO_MISC_TCONTAINERANCIENT01_H

#include "types.h"

struct TContainerAncient01
{
    u16 m_1c;
    u8 _pad1E[0x6];
    u32 m_24;
    u8 _pad28[0x8];
    u32 m_30;
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x10];
    void* m_74;
    u8 _pad78[0x8];
    u32 m_80;
    u8 _pad84[0x34];
    s16 m_b8;
    u8 _padBA[0x1E];
    u32 m_d8;
    u32 m_dc;
    u8 _padE0[0x18];
    u32 m_f8;
    u8 _padFC[0x200];
    void* m_2fc;
    u8 _pad300[0x26];
    s16 m_326;
    u8 _pad328[0x34];
    u32 m_35c;
    void* m_360;
    void reset_hp();
    void update_spawning();
    void check_open_trigger();
    void init_positions();
    void open_container();
    static void spawn_effect(void* p, void* a1, void* a2);
    void reset_state();
    void update_wait_for_player();
    void init_state_vectors();
    void render();
    void run_task();
    static void *create(void *arg0);
    static void release_static_resource();
    static void load_resources();
    static void trigger_spawn(void* p, void* a1, void* a2);
    static s32 is_global_state_in_table();
};

#endif
