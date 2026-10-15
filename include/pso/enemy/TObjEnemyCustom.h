#ifndef PSO_ENEMY_TOBJENEMYCUSTOM_H
#define PSO_ENEMY_TOBJENEMYCUSTOM_H

#include "types.h"

struct TObjEnemyCustom
{
    u8 _pad1C[0x31E];
    s16 m_33a;
    u16 m_33c;
    u8 _pad33E[0x36];
    u32 m_374;
    u32 m_378;
    u32 m_37c;
    u32 m_380;
    u8 _pad384[0x4];
    u32 m_388;
    static void update_camera_if_active();
    void draw();
    void update_knockback_state();
    void update_state_machine();
    void update();
    int update_gigue();
    void update_wander_state();
    void update_state();
    void dispatch_state();
    static void init_globals();
    static void reset_instance();
};

#endif
