#ifndef PSO_ENEMY_TOBJENERE7BERURAPUNCH_H
#define PSO_ENEMY_TOBJENERE7BERURAPUNCH_H

#include "types.h"

struct TObjEneRe7BeruraPunch
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x4C];
    u16 m_b0;
    u8 _padB2[0x2];
    u32 m_b4;
    u32 m_b8;
    u8 _padBC[0x14];
    u32 m_d0;
    u32 m_d4;
    u8 _padD8[0x4];
    void* m_dc;
    u8 _padE0[0x8];
    void* m_e8;
    u8 _padEC[0xC];
    void* m_f8;
    u8 _padFC[0x10];
    u32 m_10c;
    void snap_to_ground();
    void reset();
    void run_task();
    void init();
    int is_patrol_active();
    void render();
    void update_velocity_and_snap();
    void launch(s32 arg1, s32 arg2);
};

#endif
