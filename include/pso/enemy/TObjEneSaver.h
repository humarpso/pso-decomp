#ifndef PSO_ENEMY_TOBJENESAVER_H
#define PSO_ENEMY_TOBJENESAVER_H

#include "types.h"
#include "pso/enemy/TObjEnemy.h"

struct TObjEneSaver : public TObjEnemy {
    virtual ~TObjEneSaver();
    void turn_toward_target();
    void sub_800A5FA8();
    void sub_800A4D9C();
    void update_collapse_and_destroy();
    virtual void run_task();
    virtual void render();
    void sub_800A7734(s32);
    void init_render_flags();
    void sub_800A62D4();
    void advance_motion_state();
    void update_move_toward_target();
    void update_knockback_state();
    void update_entry_motion();
    void calc_move_state();
    void sub_800A435C();
    void apply_lookup_entry_effect();
    virtual s32 update_action_hold_status();
    virtual s32 update_movement_status();
    virtual s32 is_target_in_attack_range();
    virtual int test_flag_256();
    virtual void vfunc_61();
    virtual void vfunc_63();
    virtual void*vfunc_9();
    virtual void vfunc_58();
    virtual void vfunc_59();
    virtual void vfunc_60();
    virtual void vfunc_62();
    void* m_390;
    u8 _pad394[0x8];
    u32 m_39c;
    u32 m_3a0;
    void* m_3a4;
    u8 _pad3A8[0x18];
    u32 m_3c0;
    u32 m_3c4;
    u32 m_3c8;
    u8 unk_3B0[0x1C];
    static void *create(void *arg0, void *arg1);
};

typedef char TObjEneSaver_size[sizeof(TObjEneSaver) == 0x3CC ? 1 : -1];
#endif
