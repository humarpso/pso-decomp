#ifndef PSO_TPARTICLECTRL_H
#define PSO_TPARTICLECTRL_H
#include "pso/TObject.h"
#include "types.h"

class TParticleCtrl : public TObject {
public:
    virtual ~TParticleCtrl();
    virtual void run_task();
public:
    void set_owner_id(u16 x);
    void set_tint_color(s32 arg1);
    void clear_active_flag();
    static void *create_random_spread(void *arg0, void *arg1, void *arg2);
    void *init_particle_random_spread(void *a1, void *a2, void *a3);
    void apply_demo_mode_color();
    void check_player_proximity();
    static u8 *create_particle_obj_90(s32 arg0);
    static u8 *create_particle_obj_ac(s32 arg0);
    void draw_sprite_quad(s32 kind);
    void mark_active();
    static void disable_if_single_screen();
    void free_from_heap();
    static void free_heap();
    static void init_heap(void *arg0);
    void generate_child_default(s32 arg1, s32 arg2);
    static s32 get_particle_model(s32 arg0);
    static int get_instance();
    static void *destroy_particle(void *arg0, s16 arg1);
    u32 validate_ctrl();
    void destroy_particle();
    static void begin_effect_render();
    static void end_effect_render();
    static void reset_emitter_table();
    static void create_quad_sprites();
    void render_marker();
    void update_lifetime();
    static void set_tev_direct(s32 arg0);
    int get_object();
    static void reset_ind_tev_stages(void * _w0);
    void play_particle(s32 arg1, s16 arg2);
    static void reset_particles();
    static void setup_particle_draw(s32 arg0);
};

#endif
