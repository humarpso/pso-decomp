#ifndef PSO_ITEM_TITEMPROARMOR_H
#define PSO_ITEM_TITEMPROARMOR_H

#include "types.h"
#include "pso/item/TItemEquipBase.h"

struct TItemProArmor : public TItemEquipBase {
    virtual ~TItemProArmor();
    virtual void vfunc_16();
    virtual void vfunc_14();
    virtual int vfunc_39();
    virtual void vfunc_40();
    virtual void vfunc_46();
    virtual void vfunc_44();
    u32 m_18c;
    u16 m_190;
    u8 m_192;
    u8 m_193;
    u8 m_194;
    u8 m_195;
    u8 m_196;
    u8 *create_instance();
    void init_effect_flags();
    s32 create_armor_object();
    u16 get_id();
    int get_stat_value();
    static s16 calc_scaled_offset();
    static s16 calc_armor_value();
    void apply_armor_stat();
    u8 *create();
    u8 unk_197[0x1];
};

typedef char TItemProArmor_size[sizeof(TItemProArmor) == 0x198 ? 1 : -1];
#endif
