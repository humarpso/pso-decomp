#ifndef PSO_ITEM_TITEMPROUNIT_H
#define PSO_ITEM_TITEMPROUNIT_H

#include "types.h"
#include "pso/item/TItemEquipBase.h"

struct TItemProUnit : public TItemEquipBase {
    virtual ~TItemProUnit();
    virtual void vfunc_46();
    void vfunc_49();
    void vfunc_48();
    void vfunc_45();
    void vfunc_44();
    u8 unk_18C[0x16];
    s16 m_1bc;
    s16 m_1be;
    static u8 *create(u8 *arg0);
    void set_evp(f32 v);
    void apply_unit_effect_flags();};

#endif
