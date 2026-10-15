#ifndef PSO_BOSS_TBOSS6GRAVBALL_H
#define PSO_BOSS_TBOSS6GRAVBALL_H

#include "types.h"

struct TBoss6GravBall
{
    u8 _pad1C[0x90];
    u32 m_ac;
    u32 m_b0;
    u32 m_b4;
    u8 _padB8[0x8];
    u32 m_c0;
    u32 m_c4;
    void* m_c8;
    static void clear_player_grav_flags();
    s32 clamp_to_ground();
    void update_lifetime(void *);
    void destroy_part(s32 arg1);
    void create_emitter(s32 arg1);
    void init_parts();
    static void render();
    s32 get_state();
};

#endif
