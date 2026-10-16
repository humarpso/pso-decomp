#ifndef PSO_MISC_TUNK_804B2578_H
#define PSO_MISC_TUNK_804B2578_H
#include "types.h"
#include "pso/player/TUnk_804806E8.h"

class TUnk_804B2578 : public TUnk_804806E8 {
public:
    virtual ~TUnk_804B2578();
    virtual void vfunc_79();
    virtual void vfunc_80();
    virtual f32 vfunc_81();
    void set_scale(f32);
    virtual void apply_knockback_from_attacker(u8 *);
    virtual f32 receive_weapon_special_attack(void *, void *);
    virtual f32 receive_direct_attack(void *, void *, void *, s32, s32);
    virtual f32 receive_physical_attack(void *, f32);
    virtual int calc_distance_accuracy_penalty(void *, void *, void *, float);
    virtual s32 select_melee_contact_body(void *, f32);
    virtual void render();
    virtual void run_task();
    u8 unk_334[0xC];
    u32 m_340;
    u8 unk_344[0xC];
    f32 m_350;
    u8 unk_354[0x4];
    u32 m_358;
};

#endif
