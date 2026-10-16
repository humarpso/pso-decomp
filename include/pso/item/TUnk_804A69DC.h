#ifndef PSO_ITEM_TUNK_804A69DC_H
#define PSO_ITEM_TUNK_804A69DC_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A69DC : public TItemWeapon {
public:
    virtual ~TUnk_804A69DC();
    void for_each_target_in_range(f32);
    void *init_state_35();
    virtual void update_weapon();
    virtual void emit_marker_effects();
    virtual void set_technique_roll(s32);
    u8 unk_1F8[0x10];
};

#endif
