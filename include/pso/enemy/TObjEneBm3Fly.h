#ifndef PSO_ENEMY_TOBJENEBM3FLY_H
#define PSO_ENEMY_TOBJENEBM3FLY_H

#include "types.h"
#include <dolphin/mtx.h>
#include <stddef.h>
#include "pso/enemy/TObjEneDD_ST.h"

struct TObjEneBm3Fly : public TObjEneDD_ST {
    virtual ~TObjEneBm3Fly();
    void sub_800B1634();
    int was_hit_by_ranged();
    void update_collide_flag();
    void clamp_flight_height();
    void vfunc_63();
    void vfunc_62();
    void vfunc_61();
    void vfunc_28();
    void render();
    void run_task();
    u8 unk_374[0x8];
    f32 m_37c;
    u8 unk_380[0x40];
    s32 m_3c0;
    u8 unk_3C4[0x4];
    s32 m_3c8;
    u8 unk_3CC[0x4];
    s32 m_3d0;
    u8 unk_3D4[0x4];
    s32 m_3d8;
    u8 unk_3DC[0x4];
    f32 m_3e0;
    u8 unk_3E4[0x4];
    f32 m_3e8;
    u8 unk_3EC[0x4];
    f32 m_3f0;
    u8 unk_3F4[0x4];
    f32 m_3f8;
    u8 unk_3FC[0x4];
    f32 m_400;
    u8 unk_404[0x4];
    f32 m_408;
    u8 unk_40C[0xC];
    u16 owner_id;
    u8 unknown41A[0x458 - 0x41A];
    u8* particle_effect;
    s32 alternate_phase;
    void store_position();
    s32 init_child_params();
    static void release_shared_data();
    void *create(void *arg1, void *arg2, void *arg3, void *arg4);
    static void load_resources();
    void play_pitched_cue();
    u8 unk_460[0x48];
};

typedef char TObjEneBm3Fly_owner_id_offset[(offsetof(TObjEneBm3Fly, owner_id) == 0x418) ? 1 : -1];
typedef char TObjEneBm3Fly_particle_effect_offset[(offsetof(TObjEneBm3Fly, particle_effect) == 0x458) ? 1 : -1];
typedef char TObjEneBm3Fly_alternate_phase_offset[(offsetof(TObjEneBm3Fly, alternate_phase) == 0x45C) ? 1 : -1];
typedef char TObjEneBm3Fly_size[sizeof(TObjEneBm3Fly) == 0x4A8 ? 1 : -1];
#endif
