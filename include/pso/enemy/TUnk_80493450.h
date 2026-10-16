#ifndef PSO_ENEMY_TUNK_80493450_H
#define PSO_ENEMY_TUNK_80493450_H
#include "types.h"
#include "pso/enemy/TObjEnemy.h"

class TUnk_80493450 : public TObjEnemy {
public:
    virtual ~TUnk_80493450();
    u8 test_elt_flag(s32, s32);
    s32 countChildren();
    void link_into_group_chain();
    void unlink_enemy_group_relations();
    virtual void vfunc_83();
    virtual void beast_idle_update();
    virtual void update_turn_toward_target();
    virtual void beast_update_approach();
    virtual void beast_update_group_chase();
    virtual void beast_update_attack();
    virtual void vfunc_89();
    virtual void beast_update_hurt();
    virtual void beast_update_dead();
    virtual int beast_retire_corpse();
    virtual void vfunc_93();
    virtual void vfunc_94();
    virtual void vfunc_95();
    virtual void vfunc_96();
    virtual void vfunc_97();
    virtual void vfunc_98();
    virtual void vfunc_99();
    virtual void vfunc_100();
    virtual void vfunc_101();
    virtual void request_stand_action();
    virtual void vfunc_61();
    virtual void vfunc_59();
    virtual s32 update_action_hold_status();
    virtual s32 update_movement_status();
    virtual void vfunc_60();
    void*init_enemy_base();
    virtual int test_flag_256();
    virtual void run_task();
    s16 m_374;
    u16 m_376;
    u32 m_378;
    u32 m_37c;
    u8 unk_380[0x10];
    s32 m_390;
    u8 unk_394[0x14];
};

#endif
