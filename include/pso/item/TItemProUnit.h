#ifndef PSO_ITEM_TITEMPROUNIT_H
#define PSO_ITEM_TITEMPROUNIT_H

#include "types.h"

struct TItemProUnit
{
    u8 _pad1C[0xD4];
    u32 m_f0;
    u8 _padF4[0x80];
    u32 m_174;
    u8 _pad178[0x14];
    s16 m_18c;
    s16 m_18e;
    s16 m_190;
    void* m_192;
    u8 _pad196[0x26];
    s16 m_1bc;
    s16 m_1be;
    static u8 *create(u8 *arg0);
    void set_evp(f32 v);
    void *init_timer_event();
    void apply_unit_effect_flags();
};

#endif
