#ifndef PSO_ENEMY_TOBJENEGIBBLES_H
#define PSO_ENEMY_TOBJENEGIBBLES_H
#include "types.h"
#include <stddef.h>

struct TObjEneGibbles {
    void*vfunc_9();
    u32 resolve_sound_id(u32 sound_id);
    u8 unknown_00[0x18];
    void* virtual_table;
    u8 unk_1C[0x14];
    s32 m_30;
    u8 unk_34[0x8];
    f32 m_3c;
    u8 unk_40[0x64];
    void * m_a4;
    u8 unk_A8[0xC];
    u32 m_b4;
    u8 unk_B8[0x8];
    f32 m_c0;
    u8 unk_C4[0x4];
    f32 m_c8;
    u8 unk_CC[0x1DC];
    s32 m_2a8;
    u8 unk_2AC[0x54];
    f32 m_300;
    u8 unk_304[0x4];
    f32 m_308;
    u8 unk_30C[0x4];
    f32 m_310;
    u8 unk_314[0x12];
    s16 m_326;
    u8 unk_328[0x4];
    s16 m_32c;
    u8 unk_32E[0x10];
    s16 m_33e;
    u8 unk_340[0x14];
    f32 m_354;
    u8 unk_358[0x4];
    f32 m_35c;
    u8 unk_360[0x14];
    s32 m_374;
    u8 unk_378[0x8];
    s32 m_380;
    u8 unk_384[0x4];
    s16 m_388;
    u8 unk_38A[0x2];
    f32 m_38c;
    u8 unk_390[0x4];
    f32 m_394;
    u8 unk_398[0x4];
    s32 m_39c;
    u8 unk_3A0[0x1C];
    s32 m_3bc;
    u8 unk_3C0[0x8C];
    static void set_min_clamped_entry_value(s32 arg0, s32 arg1, f32 farg0);
    s32 spawn_ground_impact_effects(void *pos, f32 farg0);
    void play_distance_sound();
    void update_shadow_height();
    void update_position();
    void sync_state();
    void update_move_state();
    void update_action_state();
    void update_death_sequence();
    void update_spawn_state();
    void init_state();
    void clamp_angle(s32 arg1);
    void init_params();
    static void *create(void *arg0);
    static void free_static();
    static void load_resources();
};
typedef char TObjEneGibbles_vtable_offset[(offsetof(TObjEneGibbles, virtual_table) == 0x18) ? 1 : -1];
typedef char TObjEneGibbles_size[(sizeof(TObjEneGibbles) ==0x44C) ?1:-1];
#endif
