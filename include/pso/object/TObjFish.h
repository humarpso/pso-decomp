#ifndef PSO_OBJECT_TOBJFISH_H
#define PSO_OBJECT_TOBJFISH_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjFish : public TUnk_804B9870 {
    virtual ~TObjFish();
    s32 init_fish_school(void *, s32, s32);
    u8 update_state();
    virtual void render();
    virtual void run_task();
    u8 unk_90[0x4];
    u32 m_94;
    u32 m_98;
    u8 _pad9C[0x4];
    u32 m_a0;
    void sync_position_vectors();
    static void *alloc(void *arg0);
    static void reset_fish_globals();
    s32 get_phase();
    static int get_fish_count();
    static void spawn_default_particle();
    static void create_splash_particle(s32 arg0, s32 arg1, s32 arg2);
    static void spawn_particle(s32 arg0, s32 arg1, f32 farg0);
    static void free_resource();
    static void load_area_resource();
    static void draw_callback_transform_to_view();
    void set_draw_callback_list();
    s32 is_entry_table_valid();
    static void init_state_1(void *arg0);
    static void load_models();
    void update_attached_orientation();
    void destroy_child();
    static s32 set_global_param(s32 arg0);};

typedef char TObjFish_size[sizeof(TObjFish) == 0xA4 ? 1 : -1];
#endif
