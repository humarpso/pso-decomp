#ifndef PSO_ENEMY_TOBJENEDELDEPTH_H
#define PSO_ENEMY_TOBJENEDELDEPTH_H

#include "types.h"

struct TObjEneDelDepth
{
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x4];
    u32 m_38;
    u32 m_3c;
    u32 m_40;
    u8 _pad44[0x1C];
    u32 m_60;
    u8 _pad64[0x298];
    void* m_2fc;
    u8 _pad300[0x74];
    u32 m_374;
    u8 _pad378[0x4];
    u32 m_37c;
    u8 _pad380[0x20];
    void* m_3a0;
    u8 _pad3A4[0x3C];
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
    void render();
    void run_task();
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
};

#endif
