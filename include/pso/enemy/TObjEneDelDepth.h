#ifndef PSO_ENEMY_TOBJENEDELDEPTH_H
#define PSO_ENEMY_TOBJENEDELDEPTH_H

#include "types.h"
#include "pso/enemy/TObjEnemy.h"

struct TObjEneDelDepth : public TObjEnemy {
    virtual ~TObjEneDelDepth();
    void set_action_state(s32);
    void sub_803152C0();
    void sub_803152A0();
    virtual void vfunc_63();
    virtual void vfunc_62();
    virtual void vfunc_61();
    u32 m_374;
    u8 _pad378[0x4];
    u32 m_37c;
    u8 unk_380[0x4];
    s32 m_384;
    u8 unk_388[0x4];
    f32 m_38c;
    u8 unk_390[0x4];
    s32 m_394;
    f32 m_398;
    u8 unk_39C[0x4];
    void* m_3a0;
    u8 unk_3A4[0x4];
    f32 m_3a8;
    u8 unk_3AC[0x4];
    f32 m_3b0;
    u8 unk_3B4[0x4];
    f32 m_3b8;
    s32 m_3bc;
    u8 unk_3C0[0x4];
    s32 m_3c4;
    u8 unk_3C8[0x18];
    u32 m_3e0;
    u8 _pad3E4[0xC];
    u32 m_3f0;
    void update_ground_check();
    void init_move();
    void update_ai_state();
    void update_state_flag();
    void init_state();
    void update_attack_cast();
    void update_bomb_drop();
    void init_draw_state();
    void setup_depth_draw();
    void init_depth();
    void try_enter_appear();
    void update_state();
    void enter_state8();
    void update_movement();
    void init_draw_mode_and_motion();
    void init_draw_params();
    void try_relocate_on_timer();
    void init_params();
    static int set_default_depth_offset(void* p);
    s32 draw_if_visible();
    virtual void render();
    virtual void run_task();
    void update_target_depth();
    void init();
    static void free_shared_data();
    static void load_assets();
    static void reset_globals();
    static void setup_draw_material_default(f32 farg0);
    static void setup_draw_material(f32 farg0, f32 farg1, f32 farg2, f32 farg3);
    static int get_data();
    int get_flag_bit4();
    int find_nearest_enemy_with_flag(s32 arg1, f32 farg0);
    s32 get_type();
    void draw_model_part();
    void update_animation_frame();
    s32 is_state_complete();
    void set_motion(s32 arg1);
    static s32 conditional_delete(s32 arg0, s16 arg1);
    void start_attack_motion();
    void enter_appear_state();
    void update_scale_pulse();
    void move_toward_target();
    void start_move_toward_player();
};

typedef char TObjEneDelDepth_size[sizeof(TObjEneDelDepth) == 0x3F4 ? 1 : -1];
#endif
