#ifndef PSO_UNK_TOBJENEEPSILONBODY_H
#define PSO_UNK_TOBJENEEPSILONBODY_H
#include "types.h"
#include "pso/enemy/TObjEneEpsilon.h"

class TObjEneEpsilonBody : public TObjEneEpsilon {
public:
    virtual ~TObjEneEpsilonBody();
    virtual f32 receive_weapon_special_attack(void *, void *);
    void init_params();
    void update_guard_flag();
    void sub_80361D4C(s32);
    void sub_803606A0(s32);
    void render_body_effect();
    void set_guard_state(s32);
    s16 get_table_value_by_index();
    s16 sub_8035F8A8();
    virtual void run_task();
    virtual void render();
    virtual f32 receive_physical_attack(void *, f32);
    virtual void vfunc_28();
    virtual void vfunc_63();
    virtual void vfunc_62();
    virtual void vfunc_61();
    virtual void vfunc_88();
    virtual void vfunc_105();
    virtual void vfunc_106();
    virtual f32 receive_direct_attack(void *, void *, void *, s32, s32);
    u8 unk_3A8[0x16C];
};
typedef char TObjEneEpsilonBody_size[sizeof(TObjEneEpsilonBody) == 0x514 ? 1 : -1];

#endif
