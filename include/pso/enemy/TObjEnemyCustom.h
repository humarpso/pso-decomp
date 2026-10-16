#ifndef PSO_ENEMY_TOBJENEMYCUSTOM_H
#define PSO_ENEMY_TOBJENEMYCUSTOM_H

#include "types.h"
#include "pso/enemy/TObjEnemy.h"

struct TObjEnemyCustom : public TObjEnemy {
    virtual ~TObjEnemyCustom();
    u32 next_action;
    u32 m_378;
    u32 state;
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
    static void reset_instance();};

typedef char TObjEnemyCustom_size[sizeof(TObjEnemyCustom) == 0x38C ? 1 : -1];
#endif
