#ifndef PSO_MISC_TOKEY_H
#define PSO_MISC_TOKEY_H

#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

struct TOKey : public TUnk_804AFBF8 {
    virtual ~TOKey();
    virtual void vfunc_14();
    virtual s32 vfunc_15();
    virtual void vfunc_16();
    virtual void vfunc_17();
    virtual void vfunc_18();
    virtual void vfunc_19();
    virtual void vfunc_20();
    virtual void vfunc_21();
    virtual void vfunc_22();
    virtual void vfunc_23();
    virtual void vfunc_24();
    virtual void vfunc_25();
    virtual void vfunc_26();
    virtual void vfunc_27(void *);
    void vfunc_13(s32);
    s16 update_object_view_visibility(f32, f32);
    u32 m_e4;
    void trigger_activate_sound();
    void update_lock_state();
    void reset_and_notify();
    void init_switch_id();
    void init_key();
    void bswap_6x05_switch_flag();
    s32 is_any_player_in_range();
    s32 is_local_player_in_range();
    s32 is_confirm_pressed();
    u32 m_cc;
    u32 m_d0;
    u32 m_d4;
};

#endif
