#ifndef PSO_ITEM_TITEMPROARMOR_H
#define PSO_ITEM_TITEMPROARMOR_H

#include "types.h"
#include "pso/item/TItemEquipBase.h"

struct TItemProArmor : public TItemEquipBase {
    virtual ~TItemProArmor();
    u32 m_18c;
    u16 m_190;
    u8 m_192;
    u8 m_193;
    u8 m_194;
    u8 m_195;
    u8 m_196;
    u8 *create_instance();
    void *init_item_object(void * _w1, void * _w2);
    void init_effect_flags();
    s32 create_armor_object();
    u16 get_id();
    void *construct_material(void * _w1, void * _w2);
    void *init(void * _w1, void * _w2);
    int get_stat_value();
    static s16 calc_scaled_offset();
    static s16 calc_armor_value();
    void apply_armor_stat();
    void *construct(void * _w1, void * _w2);
    u8 *create();
    void tick_lifetime();
    void *dt(s16 arg1);
    void create_armor();
    u8 unk_197[0x1];
};

typedef char TItemProArmor_size[sizeof(TItemProArmor) == 0x198 ? 1 : -1];
#endif
