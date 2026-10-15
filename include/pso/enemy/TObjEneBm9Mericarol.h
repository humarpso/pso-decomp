#ifndef PSO_ENEMY_TOBJENEBM9MERICAROL_H
#define PSO_ENEMY_TOBJENEBM9MERICAROL_H

#include "types.h"

struct TObjEneBm9Mericarol
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    u8 _pad38[0x80];
    s16 m_b8;
    u8 _padBA[0x26C];
    s16 m_326;
    u8 _pad328[0x28];
    u32 m_350;
    u8 _pad354[0x6C];
    u32 m_3c0;
    u32 m_3c4;
    void* m_3c8;
    u8 _pad3CC[0x6C];
    u32 m_438;
    u8 _pad43C[0x10];
    u32 m_44c;
    u32 m_450;
    u32 m_454;
    u32 m_458;
    u8 _pad45C[0x10];
    void* m_46c;
    u8 _pad470[0x10];
    u32 m_480;
    u8 _pad484[0x4];
    u32 m_488;
    u32 m_48c;
    u32 m_490;
    u32 m_494;
    u32 m_498;
    u32 m_49c;
    u32 m_4a0;
    u8 _pad4A4[0x8];
    u32 m_4ac;
    s32 get_phase();
    void init_size_tier_and_offsets();
    s32 find_nearby_target();
    s32 try_set_mode8_if_flag2();
    void sync_center_position();
    static void free_shared_instances();
    static void *create(void *arg0);
    static void update_particle_effect();
    s32 get_clamped_level();
    void handle_motion_event(s32 arg1);
    void handle_state_message(s32 msg);
    void state_burrow(s32 arg1);
    void handle_event(s32 arg1);
    void handle_action(s32 arg1);
    void *dt(s16 arg1);
    void *destroy(s16 arg1);
    void *construct(s32 arg1, s32 arg2);
};

#endif
