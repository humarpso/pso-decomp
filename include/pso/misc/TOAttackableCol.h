#ifndef PSO_MISC_TOATTACKABLECOL_H
#define PSO_MISC_TOATTACKABLECOL_H

#include "types.h"
#include "pso/player/TUnk_804806E8.h"

struct TOAttackableCol : public TUnk_804806E8 {
    virtual ~TOAttackableCol();
    virtual void vfunc_6(s16 *, s32);
    virtual s32 vfunc_27(void *, s32, f32);
    virtual s32 vfunc_26(s32, s32);
    virtual void vfunc_25(u8 *);
    virtual f32 vfunc_24(void *, void *);
    virtual f32 vfunc_23(void *, void *, void *, s32, s32);
    virtual f32 vfunc_22(void *, f32);
    virtual int vfunc_21(void *, void *, void *, float);
    virtual s32 vfunc_20(void *, f32);
    u8 unk_334[0x8];
    u32 m_33c;
    void init_params();
    int send_state_change(u16 state);
    int handle_6x91_update_state();
    f32 apply_hit(s32 arg1);
    void release();
    void check_door_trigger();
    virtual void run_task();
    virtual void render();
    static void *create(void *arg0);
    void bswap_state();
    void broadcast_state();
    u8 unk_340[0x10];
};

typedef char TOAttackableCol_size[sizeof(TOAttackableCol) == 0x350 ? 1 : -1];
#endif
