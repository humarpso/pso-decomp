#ifndef PSO_ENEMY_TOBJENEBEAST_H
#define PSO_ENEMY_TOBJENEBEAST_H

#include "types.h"

struct TObjEneBeast
{
    u8 _pad00[0x1C];
    u16 m_1c;
    u8 _pad1E[0x9A];
    s16 m_b8;
    u8 _padBA[0x1E];
    u32 m_d8;
    u32 m_dc;
    u8 _padE0[0x1C8];
    void* m_2a8;
    u32 m_2ac;
    u8 _pad2B0[0x4C];
    f32 m_2fc[3];
    u8 _pad308[0x20];
    u16 m_328;
    u8 _pad32A[0x2];
    s16 m_32c;
    u8 _pad32E[0x6];
    u32 m_334;
    u16 m_338;
    s16 m_33a;
    u16 m_33c;
    u16 m_33e;
    u8 _pad340[0x10];
    f32* m_350;
    u8 _pad354[0x14];
    u32 m_368;
    u8 _pad36C[0x8];
    s16 m_374;
    u16 m_376;
    u32 m_378;
    u32 m_37c;
    u8 _pad380[0x10];
    u32 m_390;
    u8 _pad394[0x14];
    void* m_3a8;
    void* m_3ac;
    u8 m_3b0[4][0x1C];
    static void on_attack_cooldown_expired();
    void spawn_death_fire();
    void update_claw_trail();
    void select_subtype();
    void update_appearance();
    static void *create(void *arg0);
    static void load_resources();
    s32 update_action_hold();
    static int is_lying_down();
    void request_stand_action();
    void select_model_record(s32 i);
};

#include <stddef.h>
typedef char BeastSize[(sizeof(TObjEneBeast) == 0x420) ? 1 : -1];
typedef char BeastAnimation[(offsetof(TObjEneBeast, m_b8) == 0xB8) ? 1 : -1];
typedef char BeastTarget[(offsetof(TObjEneBeast, m_338) == 0x338) ? 1 : -1];
typedef char BeastParameters[(offsetof(TObjEneBeast, m_350) == 0x350) ? 1 : -1];
typedef char BeastCountdown[(offsetof(TObjEneBeast, m_374) == 0x374) ? 1 : -1];
typedef char BeastSuppression[(offsetof(TObjEneBeast, m_390) == 0x390) ? 1 : -1];
typedef char BeastEmbeddedObjects[(offsetof(TObjEneBeast, m_3b0) == 0x3B0) ? 1 : -1];

#endif
