#ifndef PSO_ENEMY_TOBJENEBALCLAW_H
#define PSO_ENEMY_TOBJENEBALCLAW_H

#include "types.h"

struct TObjEneBalClaw
{
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x354];
    u32 m_388;
    u8 _pad38C[0x4];
    void* m_390;
    u8 _pad394[0x24];
    u32 m_3b8;
    void render_scaled(s32 arg1);
    void update_wobble();
    void update_claw_angle();
    static void release_global_805D4F20();
    void clear_flag_in_state7();
};

#endif
