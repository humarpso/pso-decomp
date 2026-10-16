#ifndef PSO_BOSS_TBOSS2JOINT_H
#define PSO_BOSS_TBOSS2JOINT_H

#include "types.h"

struct TBoss2Joint
{
    u16 m_1c;
    u8 _pad1E[0xE];
    u16 m_2c;
    u8 _pad2E[0x2];
    u32 m_30;
    u8 _pad34[0x4];
    void* m_38;
    u8 _pad3C[0x68];
    u32 m_a4;
    u8 _padA8[0x210];
    s16 m_2b8;
    u8 _pad2BA[0x1A];
    u16 m_2d4;
    u8 _pad2D6[0x50];
    s16 m_326;
    u8 _pad328[0x4];
    s16 m_32c;
    u8 _pad32E[0x5E];
    u32 m_38c;
    u32 m_390;
    u32 m_394;
    u32 m_398;
    u32 m_39c;
    void call_36A90_with_1();
    void init_joint_offset(s32 arg1);
    void update_position_history();
    void run_task();
    s32 init_params();
    void render();
};

#endif
