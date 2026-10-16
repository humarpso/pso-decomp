#ifndef PSO_ENEMY_TOBJENEMERILLLIA_H
#define PSO_ENEMY_TOBJENEMERILLLIA_H

#include "types.h"
#include "pso/enemy/TUnk_80493450.h"

struct TObjEneMerillLia : public TUnk_80493450 {
    virtual ~TObjEneMerillLia();
    virtual void vfunc_83();
    virtual void vfunc_60();
    virtual void vfunc_59();
    virtual void vfunc_58();
    void* m_3a8;
    s32 get_clamped_level();
    void clamp_and_apply_mode_param();
    void reset_state_clear_status();
    void init_attack_state();
    void reset_action_state();
    static void search_target(void *ov);
    static s32 update_emerge_state(void *ov);
    static s32 update_kafun_attack(void *p);
    void init_params_from_position();
    void select_action_by_distance();
    static void destroy_rocks();
    void load_entry_params(s32 i);
    u8 unk_3AC[0x18];
    f32 m_3c4;
    u8 unk_3C8[0x8];
    f32 m_3d0;
    u8 unk_3D4[0x4];
    s16 m_3d8;
    u8 unk_3DA[0x2];
};

typedef char TObjEneMerillLia_size[sizeof(TObjEneMerillLia) == 0x3DC ? 1 : -1];
#endif
