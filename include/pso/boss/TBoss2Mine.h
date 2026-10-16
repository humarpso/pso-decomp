#ifndef PSO_BOSS_TBOSS2MINE_H
#define PSO_BOSS_TBOSS2MINE_H

#include "types.h"
#include "pso/enemy/TObjEneDD.h"

struct TBoss2Mine : public TObjEneDD {
    virtual ~TBoss2Mine();
    void vfunc_63();
    void vfunc_62();
    void vfunc_61();
    void apply_defense_stat_status(void *);
    void vfunc_51(void *);
    void vfunc_50();
    void vfunc_49();
    void vfunc_48(s32);
    void vfunc_47();
    void vfunc_46();
    void vfunc_45();
    void vfunc_44();
    void vfunc_28();
    u8 _pad390[0x20];
    u32 m_3b0;
    u8 _pad3B4[0x14];
    u32 m_3c8;
    u32 m_3cc;
    void move_mine();
    void set_launch_position_velocity(u8 *arg1, u8 *arg2);
    void *deleting_dtor(s16 arg1);
    void render();
    void set_state_by_distance(s32 arg1);
    void update_move_flag();
    void save_position();
    void run_task();};

#endif
