#ifndef PSO_ITEM_TUNK_804A204C_H
#define PSO_ITEM_TUNK_804A204C_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A204C : public TItemWeapon {
public:
    virtual ~TUnk_804A204C();
    virtual void reserved_53();
    virtual void update_weapon();
    virtual void emit_marker_effects();
    u8 unk_1F8[0x10];
};

#endif
