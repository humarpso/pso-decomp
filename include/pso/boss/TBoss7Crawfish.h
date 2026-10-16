#ifndef PSO_BOSS_TBOSS7CRAWFISH_H
#define PSO_BOSS_TBOSS7CRAWFISH_H

#include "types.h"
#include "pso/enemy/TObjEnemy.h"

struct TBoss7Crawfish : public TObjEnemy {
    virtual ~TBoss7Crawfish();
    void* m_374;
    u8 _pad378[0x28];
    u32 m_3a0;
    u8 _pad3A4[0x28];
    u32 m_3cc;
    void spawn_effect(s32 arg1);
    void free_child();
    void spawn_ground_effects();
    void render();
    void clear_object_state_exchange();
    void check_band_and_destroy();
    static void update(s32 arg0);
    void update_motion_and_release();
    void aim_at_nearest_player();
    void update_attack_state();
    void change_state(s32 state);
    void run_task();
    static void destroy_instance();
    static void load_static_resource();
    f32 get_health();
    void set_anim_timer(s16 v);};

typedef char TBoss7Crawfish_size[sizeof(TBoss7Crawfish) == 0x3D0 ? 1 : -1];
#endif
