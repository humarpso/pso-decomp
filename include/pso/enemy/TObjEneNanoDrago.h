#ifndef PSO_ENEMY_TOBJENENANODRAGO_H
#define PSO_ENEMY_TOBJENENANODRAGO_H

#include "types.h"
#include "pso/enemy/TObjEnemyCustom.h"

struct NanoDragoVector { f32 x, y, z; };
struct NanoDragoMovementParams { f32 f0; f32 base_speed; s32 turn; };

struct TObjEneNanoDrago : public TObjEnemyCustom {
    virtual ~TObjEneNanoDrago();
    virtual void run_task();
    virtual s32 update_action_hold_status();
    virtual void vfunc_61();
    virtual void vfunc_59();
    virtual void vfunc_60();
    virtual void vfunc_58();
    virtual void vfunc_62();
    virtual void vfunc_63();
    void dispatch_action_state();
    void sub_800DB970();
    void sub_800DA2A0();
    void sub_800DA1F4();
    void load_entry_params_nanodrago(s32);
    void sub_800D9BBC();
    s16 growth_count;
    u8 unknown38E[2];
    NanoDragoVector m_390;
    u8 unknown39C[0x34];
    s32 accum;
    f32 t;
    f32 speed;
    u32 m_3dc;
    s32 toggle;
    u8 unknown3E4[4];
    void *m_3e8;
    u8 unk_3EC[0x18];
    f32 m_404;
    u8 unk_408[0x4];
    void *m_40c;

    void update_growth_state();
    void update_circling_state();
    static void *create(void *arg0);
    u8 unk_410[0x6C];
};

typedef char TObjEneNanoDrago_size[sizeof(TObjEneNanoDrago) == 0x47C ? 1 : -1];
#endif
