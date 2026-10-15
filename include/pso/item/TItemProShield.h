#ifndef PSO_ITEM_TITEMPROSHIELD_H
#define PSO_ITEM_TITEMPROSHIELD_H

#include "types.h"

struct TItemProShield
{
    u8 _pad1C[0xD4];
    u32 m_f0;
    u32 m_f4;
    u8 _padF8[0x7C];
    u32 m_174;
    u8 _pad178[0x10];
    u32 m_188;
    u32 m_18c;
    u32 m_190;
    u32 m_194;
    u8 m_198;
    u8 m_199;
    u8 m_19a;
    u8 m_19b;
    u32 m_19c;
    u8 get_slot_count();
    s16 get_field_2b8();
    static void create_shield_effect(s32 arg0, u16 arg1, u32 arg2);
    void *init(void * _w1, void * _w2);
    u8 *create();
    void *init_item_object(void * _w1, void * _w2);
    void deactivate_shield_effect(s32 arg1);
    u8 *create_instance();
    static void free();
    static void load_data();
};

#endif
