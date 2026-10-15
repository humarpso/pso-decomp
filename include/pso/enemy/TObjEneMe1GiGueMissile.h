#ifndef PSO_ENEMY_TOBJENEME1GIGUEMISSILE_H
#define PSO_ENEMY_TOBJENEME1GIGUEMISSILE_H

#include "types.h"

struct TObjEneMe1GiGueMissile
{
    u32 m_1c;
    u8 _pad20[0x14];
    u16 m_34;
    u8 _pad36[0x32];
    u32 m_68;
    void* m_6c;
    u8 _pad70[0x30];
    u32 m_a0;
    u32 m_a4;
    u8 _padA8[0x8];
    u32 m_b0;
    void explode(void *pos);
    static void create(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
    void render();
    void run_task();
    void update_lifetime();
};

#endif
