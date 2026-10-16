#ifndef PSO_ITEM_TUNK_804A2E80_H
#define PSO_ITEM_TUNK_804A2E80_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A2E80 : public TItemWeapon {
public:
    virtual ~TUnk_804A2E80();
    void*init_shot_effect();
    virtual void update_weapon();
    virtual void emit_marker_effects();
    u8 unk_1F8[0xC];
};

#endif
