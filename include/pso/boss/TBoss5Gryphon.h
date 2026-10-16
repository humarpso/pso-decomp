#ifndef PSO_BOSS_TBOSS5GRYPHON_H
#define PSO_BOSS_TBOSS5GRYPHON_H

#include "types.h"
#include "pso/enemy/TObjEneDD_ST.h"

struct TBoss5Gryphon : public TObjEneDD_ST {
    virtual ~TBoss5Gryphon();
    s32 enemy_probe_wall_ahead(f32, f32, f32);
    void calc_shot_position(u8 *, f32, f32, f32);
    u8 *try_move_actor_xz_on_ground(u8 *);
    virtual void vfunc_28();
    virtual void vfunc_63();
    virtual void vfunc_62();
    virtual void vfunc_61();
    virtual void vfunc_88();
    virtual void render_shadows();
    virtual void vfunc_83();
    virtual int vfunc_105();
    virtual void vfunc_106();
    virtual void clear_harmful_statuses();
    virtual void apply_shock_status();
    virtual void apply_movement_ailment(s32);
    virtual void apply_confusion_status();
    virtual void apply_slow_status();
    virtual void apply_paralysis();
    virtual void apply_poison_status();
    u8 unk_374[0xF0];
    u32 m_480;
    u8 _pad484[0x10];
    void* m_494;
    u8 _pad498[0x24];
    u32 m_4bc;
    u32 m_4c0;
    void* m_4c4;
    u8 _pad4C8[0x18];
    u32 m_4e0;
    u32 m_4e4;
    u8 _pad4E8[0x78];
    void* m_560;
    u8 _pad564[0x8];
    void* m_56c;
    u8 _pad570[0x8];
    u32 m_578;
    u32 m_57c;
    void* m_580;
    u8 _pad584[0x6C];
    u32 m_5f0;
    void* m_5f4;
    u8 _pad5F8[0xE4];
    u32 m_6dc;
    u32 m_6e0;
    u32 m_6e4;
    u32 m_6e8;
    u32 m_6ec;
    u32 m_6f0;
    u8 _pad6F4[0x2C];
    u32 m_720;
    u32 m_724;
    u32 m_728;
    u32 m_72c;
    u32 m_730;
    u8 _pad734[0x40];
    u32 m_774;
    u32 m_778;
    u8 unk_760[0x1C];
    void render_nodes_with_flag();
    void render_with_fade(s32 arg1);
    void render_model();
    void copy_bone_positions();
    void draw_body();
    void free_parts();
    void update_particle_positions();
    void destroy_parts();
    void enable_particles();
    void update_ground_effects();
    void update_heading(s32 arg1);
    void advance_motion_entry();
    void advance_motion_timer();
    void apply_velocity();
    void spawn_lightning_effect();
    void spawn_ground_splash();
    void update_collider_from_table();
    void set_target_from_action(void *arg1);
    s32 reload_stats_for_phase(void *);
    void reload_stats_for_type();
    void reset_float_3c();
    void play_se(s32 arg1);
    void shift_position_history();
    static void cleanup();
    static void *create(void *arg0);
};

typedef char TBoss5Gryphon_size[sizeof(TBoss5Gryphon) == 0x77C ? 1 : -1];
#endif
