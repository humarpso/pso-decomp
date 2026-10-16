#ifndef PSO_ITEM_TUNK_804A0DB0_H
#define PSO_ITEM_TUNK_804A0DB0_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A0DB0 : public TItemWeapon {
public:
    virtual ~TUnk_804A0DB0();
    virtual void emit_marker_effects();
    u8 unk_1F8[0xC];
};

#endif
