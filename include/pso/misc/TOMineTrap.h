#ifndef PSO_MISC_TOMINETRAP_H
#define PSO_MISC_TOMINETRAP_H

#include "types.h"

struct TOMineTrap
{
    u8 _pad1C[0x8];
    u32 m_24;
    s16 m_28;
    u8 _pad2A[0x4];
    s16 m_2e;
    u32 m_30;
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x14];
    void* m_50;
    u8 _pad54[0x30];
    u32 m_84;
    u32 m_88;
    u8 _pad8C[0x18];
    u32 m_a4;
    u8 _padA8[0x200];
    u32 m_2a8;
    u8 _pad2AC[0x2C];
    u16 m_2d8;
    u8 _pad2DA[0x22];
    void* m_2fc;
    u8 _pad300[0x26];
    s16 m_326;
    u8 _pad328[0xC];
    void* m_334;
    u8 _pad338[0xC];
    u32 m_344;
    u8 _pad348[0xC];
    u32 m_354;
    u32 m_358;
    u16 m_35c;
    u8 _pad35E[0x12];
    u32 m_370;
    u32 m_374;
    u32 m_378;
    u8 _pad37C[0x2];
    u16 m_37e;
    u32 m_380;
    u16 get_trap_type();
    static int get_trap_count();
    static void set_instance(int a0);
    static void set_trap_count(int a0);
    void bswap_6x80_trigger_trap();
    void send_and_handle_60();
    s32 matches_id(u16 arg1);
    void set_state();
    s32 find_target_in_range();
    void set_triggered();
    static void destroy_matching_traps();
    void*get_mine_data_ptr();
    s32 is_target_in_list(void *obj);
    s32 check_trigger(u32 arg1);
    s32 can_trigger(u32 arg1);
    void init_object_set_pos();
    static void init_trap();
    void update_state();
    void spawn_effect();
    void attach_to_keymachine();
    void detonate_if_triggered();
    f32 trigger_explosion();
    f32 calc_trigger_range(s32 arg1);
    void update_trigger();
    void follow_target();
    void update_float_height();
    void sync_position();
    void send_state_packet(u16 idx);
};

#endif
