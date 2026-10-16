#ifndef PSO_BOSS_TBOSS3VOLOPTP01_H
#define PSO_BOSS_TBOSS3VOLOPTP01_H

#include "types.h"
#include "pso/enemy/TObjEnemyCustom.h"

struct TBoss3VoloptP01 : public TObjEnemyCustom {
    virtual ~TBoss3VoloptP01();
    void init_params();
    void sub_80043758();
    void load_volopt_param_entry(s32);
    virtual void render();
    virtual void run_task();
    u8 unk_38C[0xE];
    s16 m_39a;
    u8 unk_39C[0x8];
    s32 m_3a4;
    u8 unk_3A8[0x8];
    u8 * m_3b0;
    u32 m_3b4;
    u32 m_3b8;
    void* m_3bc;
    void run_state_machine();
    void update_breakup();
    void update_state();
    void dispatch_state();
    static void destroy();
    static void init_breakup_effect();
    static void *create(void *arg0);
    void init_cursor_record();
    u8 unk_3C0[0x58];
};

typedef char TBoss3VoloptP01_size[sizeof(TBoss3VoloptP01) == 0x418 ? 1 : -1];
#endif
