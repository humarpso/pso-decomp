#ifndef PSO_ENEMY_TOBJENERE4BIT_H
#define PSO_ENEMY_TOBJENERE4BIT_H

#include "types.h"
#include "pso/enemy/TObjEneDD_ST.h"

struct TObjEneRe4Bit : public TObjEneDD_ST {
    virtual ~TObjEneRe4Bit();
    virtual void vfunc_88();
    virtual s32 vfunc_83();
    virtual void vfunc_106();
    void sub_800ED408();
    void call_vt_90_91();
    void clear_state_flags_when_done();
    void vfunc_63();
    void vfunc_62();
    void vfunc_61();
    void apply_defense_stat_status(void *);
    void apply_attack_stat_status(void *);
    void clear_harmful_statuses();
    void apply_shock_status();
    void apply_movement_ailment(s32);
    void apply_confusion_status();
    void apply_slow_status();
    void apply_paralysis();
    void apply_poison_status();
    void vfunc_28();
    void render();
    void run_task();
    u8 unk_374[0x30];
    u32 m_3c0;
    u16 m_3c4;
    u8 _pad3C6[0x2];
    u32 m_3c8;
    u32 m_3cc;
    u32 m_3d0;
    u8 _pad3D4[0x8];
    void* m_3dc;
    u8 _pad3E0[0x10];
    u32 m_3f0;
    u8 _pad3F4[0x10];
    u32 m_404;
    u8 unk_3EC[0x24];
    s32 handle_event(s32 arg1);
    void handle_state_message(s32 msg);
    void reset_transform();
    void update_homing_velocity();
    void update_position_flag();
    void copy_pos();
    void create_enabled(s32 arg1, s32 arg2, s32 arg3);
    void create_disabled(s32 arg1, s32 arg2, s32 arg3);
    static void *create(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
};

typedef char TObjEneRe4Bit_size[sizeof(TObjEneRe4Bit) == 0x410 ? 1 : -1];
#endif
