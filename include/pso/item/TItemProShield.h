#ifndef PSO_ITEM_TITEMPROSHIELD_H
#define PSO_ITEM_TITEMPROSHIELD_H

#include "types.h"
#include "pso/item/TItemEquipBase.h"

struct TItemProShield : public TItemEquipBase {
    virtual ~TItemProShield();
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
    static void load_data();};

typedef char TItemProShield_size[sizeof(TItemProShield) == 0x1A0 ? 1 : -1];
#endif
