#ifndef PSO_ITEM_TUNK_804A6AD8_H
#define PSO_ITEM_TUNK_804A6AD8_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A6AD8 : public TItemWeapon {
public:
    virtual ~TUnk_804A6AD8();
    void yasminkov_9000m_eject_casing(s32, s32);
    virtual void emit_marker_effects();
    virtual void update_weapon();
    virtual void reserved_53();
    u8 unk_1F8[0x10];
};

#endif
