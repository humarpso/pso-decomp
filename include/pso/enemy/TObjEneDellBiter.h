#ifndef PSO_ENEMY_TOBJENEDELLBITER_H
#define PSO_ENEMY_TOBJENEDELLBITER_H

#include "types.h"
#include "pso/enemy/TObjEneDD_ST.h"

struct TObjEneDellBiter : public TObjEneDD_ST {
    virtual ~TObjEneDellBiter();
    void sub_803055C8();
    s32 render_model_if_visible();
    virtual void vfunc_88();
    virtual s32 vfunc_83();
    virtual void vfunc_106();
    void vfunc_63();
    void vfunc_62();
    void vfunc_61();
    void vfunc_28();
    void render();
    void run_task();
    u8 unk_374[0x30];
    u32 m_3c0;
    u32 m_3c4;
    u8 _pad3C8[0xC];
    void* m_3d4;
    u8 _pad3D8[0x10];
    u32 m_3e8;
    u8 _pad3EC[0x4];
    void* m_3f0;
    u8 _pad3F4[0x6C];
    void* m_460;
    u8 _pad464[0x20];
    u32 m_484;
    u8 _pad488[0x34];
    u32 m_4bc;
    static void step_demo_script();
    void update_state(s32 arg1);
    s32 check_low_hp_transition();
    void spawn_front_particle();
    void update_attack_effect();
    void init_target_offsets();
    void update_particle_emitters();
    void set_effect_pos_above_self();
    void init_params();
    static void set_min_clamped_entry_value(s32 arg0, f32 farg0);
    static void destroy_static_instance();
    static void load_resources();
    u8 unk_4A4[0x40];
};

typedef char TObjEneDellBiter_size[sizeof(TObjEneDellBiter) == 0x4E4 ? 1 : -1];
#endif
