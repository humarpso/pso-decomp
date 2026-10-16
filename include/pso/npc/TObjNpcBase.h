#ifndef PSO_NPC_TOBJNPCBASE_H
#define PSO_NPC_TOBJNPCBASE_H

#include "types.h"
#include "pso/enemy/TObjEnemy.h"

struct TObjNpcBase : public TObjEnemy {
    virtual ~TObjNpcBase();
    void deactivateIdleMode();
    u8 unk_374[0x14];
    u32 m_388;
    u32 m_38c;
    u32 m_390;
    u32 m_394;
    u8 _pad398[0x8];
    u32 m_3a0;
    u32 m_3a4;
    u32 m_3a8;
    u32 m_3ac;
    u32 m_3b0;
    u32 m_3b4;
    void play_voice();
    static void free_static();
    void setup_common();
    void apply_set_params(s32 arg1, s32 arg2);
    void update_conversation();
    void update_wandering();
    void update_standing();
    void activate_idle_mode();};

typedef char NpcBaseSize[(sizeof(TObjNpcBase) == 0x3B8) ? 1 : -1];

#endif
