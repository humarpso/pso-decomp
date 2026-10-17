#ifndef PSO_ITEM_TITEMPROSHIELD_H
#define PSO_ITEM_TITEMPROSHIELD_H

#include "types.h"
#include "pso/item/TItemEquipBase.h"

struct TItemProShield : public TItemEquipBase {
    virtual ~TItemProShield();
    virtual void vfunc_51();
    virtual void vfunc_44();
    virtual void vfunc_26();
    virtual void vfunc_30();
    virtual void vfunc_45();
    virtual void vfunc_46();
    virtual void vfunc_16();
    virtual void vfunc_14();
    void sub_80117FEC();
    u32 m_18c;
    u32 m_190;
    u32 m_194;
    u8 m_198;
    u8 m_199;
    u8 m_19a;
    u8 m_19b;
    u32 m_19c;
    s16 get_field_2b8();
    static void create_shield_effect(s32 arg0, u16 arg1, u32 arg2);
    u8 *create();
    void deactivate_shield_effect(s32 arg1);
    u8 *create_instance();
    static void free();
    static void load_data();
    static void set_params(s32 arg0, void *arg1);
};

typedef char TItemProShield_size[sizeof(TItemProShield) == 0x1A0 ? 1 : -1];
#endif
