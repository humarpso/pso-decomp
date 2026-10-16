#ifndef PSO_ITEM_TUNK_804A4D70_H
#define PSO_ITEM_TUNK_804A4D70_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A4D70 : public TItemWeapon {
public:
    virtual ~TUnk_804A4D70();
    virtual void update_attack();
    virtual void emit_marker_effects();
    void apply_scale_if_active(f32);
    u8 unk_1F8[0x28];
};

#endif
