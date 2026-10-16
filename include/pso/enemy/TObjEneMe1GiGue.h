#ifndef PSO_ENEMY_TOBJENEME1GIGUE_H
#define PSO_ENEMY_TOBJENEME1GIGUE_H

#include "types.h"
#include "pso/enemy/TObjEnemyCustom.h"

struct TObjEneMe1GiGue : public TObjEnemyCustom {
    virtual ~TObjEneMe1GiGue();
    u16 m_38c;
    u8 _pad38E[0x2];
    void* m_390;
    u8 _pad394[0x60];
    u32 m_3f4;
    u32 m_3f8;
    void* m_3fc;
    u8 _pad400[0x18];
    void* m_418;
    u8 _pad41C[0x2C];
    u32 m_448;
    void dispatch_state();
    static void *create(void *arg0);
    static void delete_barrier();
    static void load_resources();
    void load_params_from_table(s32 i);
    void update_if_active(s32 _w1);
    void set_state(s32 arg1);
    u8 unk_44C[0xC];
};

typedef char TObjEneMe1GiGue_size[sizeof(TObjEneMe1GiGue) == 0x458 ? 1 : -1];
#endif
