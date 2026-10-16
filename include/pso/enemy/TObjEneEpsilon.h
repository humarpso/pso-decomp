#ifndef PSO_ENEMY_TOBJENEEPSILON_H
#define PSO_ENEMY_TOBJENEEPSILON_H

#include "types.h"
#include "pso/enemy/TObjEneDD_ST.h"

struct TObjEneEpsilon : public TObjEneDD_ST {
    virtual ~TObjEneEpsilon();
    s32 vfunc_39();
    s32 vfunc_30();
    u8 unk_374[0x30];
    void* m_3c0;
    void fire_attack_a(s32 arg1, s32 arg2, f32 farg0);
    void fire_attack_b(s32 arg1, s32 arg2, f32 farg0);
    void fire_attack_c(s32 arg1, s32 arg2, f32 farg0);
    void update_angle(s32 arg1);
    s32 update_death_check();
    s32 update_linked_position(f32 scale);
    void select_and_apply_target(f32 farg0);};

#endif
