#ifndef PSO_ENEMY_TOBJENEBALCLAW_H
#define PSO_ENEMY_TOBJENEBALCLAW_H

#include "types.h"
#include "pso/enemy/TObjEnemyCustom.h"

struct TObjEneBalClaw : public TObjEnemyCustom {
    virtual ~TObjEneBalClaw();
    u8 _pad38C[0x4];
    void* m_390;
    u8 _pad394[0x24];
    u32 m_3b8;
    void render_scaled(s32 arg1);
    void update_wobble();
    void update_claw_angle();
    static void release_global_805D4F20();
    void clear_flag_in_state7();
    u8 unk_3BC[0x4];
};

typedef char TObjEneBalClaw_size[sizeof(TObjEneBalClaw) == 0x3C0 ? 1 : -1];
#endif
