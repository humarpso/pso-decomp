#ifndef PSO_ITEM_TUNK_804A6BD0_H
#define PSO_ITEM_TUNK_804A6BD0_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A6BD0 : public TItemWeapon {
public:
    virtual ~TUnk_804A6BD0();
    virtual void emit_marker_effects();
    virtual void update_weapon();
    u8 unk_1F8[0x10];
};

#endif
