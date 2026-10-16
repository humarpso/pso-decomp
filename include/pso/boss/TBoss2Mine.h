#ifndef PSO_BOSS_TBOSS2MINE_H
#define PSO_BOSS_TBOSS2MINE_H

#include "types.h"

struct TBoss2Mine
{
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
    u16 m_1c;
    u8 _pad1E[0x6];
    u32 m_24;
    u8 _pad28[0x4];
    u16 m_2c;
    u8 _pad2E[0x2];
    u32 m_30;
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x20];
    u32 m_5c;
    u32 m_60;
    u32 m_64;
    u8 _pad68[0x3C];
    u32 m_a4;
    u8 _padA8[0x210];
    s16 m_2b8;
    u8 _pad2BA[0x42];
    void* m_2fc;
    u8 _pad300[0x26];
    s16 m_326;
    u8 _pad328[0x4];
    u16 m_32c;
    u8 _pad32E[0x5E];
    u32 m_38c;
    u8 _pad390[0x20];
    u32 m_3b0;
    u8 _pad3B4[0x14];
    u32 m_3c8;
    u32 m_3cc;
    void move_mine();
    void*create(int a1, int a2, int a3);
    void set_launch_position_velocity(u8 *arg1, u8 *arg2);
    void *deleting_dtor(s16 arg1);
    void render();
    void set_state_by_distance(s32 arg1);
    void update_move_flag();
    void save_position();
    void run_task();
};

#endif
