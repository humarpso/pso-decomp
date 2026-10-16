#ifndef PSO_ENEMY_TOBJENEMYCUSTOM_H
#define PSO_ENEMY_TOBJENEMYCUSTOM_H

#include "types.h"
#include "pso/enemy/TObjEnemy.h"

struct TObjEnemyCustom : public TObjEnemy {
    virtual ~TObjEnemyCustom();
    virtual void vfunc_79();
    virtual void vfunc_65(s32, s32);
    virtual void vfunc_63();
    virtual void vfunc_62();
    virtual void vfunc_61();
    virtual void vfunc_60();
    virtual void vfunc_59();
    virtual void vfunc_58();
    virtual void vfunc_28();
    virtual void render();
    virtual void run_task();
    u32 next_action;
    u32 m_378;
    u32 state;
    u32 m_380;
    u8 _pad384[0x4];
    u32 m_388;
    static void update_camera_if_active();
    void update_knockback_state();
    void update_state_machine();
    void update();
    void update_wander_state();
    void update_state();
    void dispatch_state();
    static void init_globals();
    static void reset_instance();};

typedef char TObjEnemyCustom_size[sizeof(TObjEnemyCustom) == 0x38C ? 1 : -1];
#endif
