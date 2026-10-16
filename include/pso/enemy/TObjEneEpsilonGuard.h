#ifndef PSO_ENEMY_TOBJENEEPSILONGUARD_H
#define PSO_ENEMY_TOBJENEEPSILONGUARD_H

#include "types.h"
#include "pso/enemy/TObjEneEpsilon.h"

struct TObjEneEpsilonGuard : public TObjEneEpsilon {
    virtual ~TObjEneEpsilonGuard();
    virtual void vfunc_88();
    virtual void vfunc_89();
    virtual f32 vfunc_22(void *, f32);
    virtual f32 vfunc_24(void *, void *);
    void vfunc_63();
    void vfunc_62();
    void vfunc_61();
    void vfunc_28();
    void render();
    void run_task();
    u8 unk_3A8[0x9C];
    void* m_460;
    u8 _pad464[0x8];
    u32 m_46c;
    u16 m_470;
    u8 _pad472[0x4A];
    void* m_4bc;
    void *create(void *arg1, void *arg2, void *arg3, void *arg4);
    void init_model_and_state();
    s16 get_table_value_by_index();
    s32 all_children_gone();
    static void update_attack_pattern(void *arg0);
    void tick_stun_timer();
    void tick_timer_set_flag();
    static void record_camera_angle_samples();
    void render_body_effect();
    void draw_debug_line();
    void update_guard_flag();
    void init_params();
    void update_step();
    void update_position();
    void request_state8();
    void set_action_9();
    void dispatch_state(u32 arg1, s32 arg2);
    static s32 create_damage_font(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
    static void free_shared_resources();
    static void load_assets();
    u8 unk_4A4[0x34];
};

typedef char TObjEneEpsilonGuard_size[sizeof(TObjEneEpsilonGuard) == 0x4D8 ? 1 : -1];
#endif
