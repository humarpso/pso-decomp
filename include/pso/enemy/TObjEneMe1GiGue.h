#ifndef PSO_ENEMY_TOBJENEME1GIGUE_H
#define PSO_ENEMY_TOBJENEME1GIGUE_H

#include "types.h"

struct TObjEneMe1GiGue
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x8];
    void* m_44;
    u8 _pad48[0x8];
    void* m_50;
    u8 _pad54[0x50];
    u32 m_a4;
    u8 _padA8[0x10];
    s16 m_b8;
    u8 _padBA[0x1E];
    u32 m_d8;
    u32 m_dc;
    u8 _padE0[0x1B0];
    void* m_290;
    u8 _pad294[0x8];
    void* m_29c;
    u8 _pad2A0[0x18];
    s16 m_2b8;
    s16 m_2ba;
    u8 _pad2BC[0x70];
    s16 m_32c;
    u16 m_32e;
    u8 _pad330[0xE];
    u16 m_33e;
    u8 _pad340[0x10];
    u32 m_350;
    u8 _pad354[0x14];
    u32 m_368;
    u32 m_36c;
    u8 _pad370[0x18];
    u32 m_388;
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
};

#endif
