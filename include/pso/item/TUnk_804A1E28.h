#ifndef PSO_ITEM_TUNK_804A1E28_H
#define PSO_ITEM_TUNK_804A1E28_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A1E28 : public TItemWeapon {
public:
    virtual ~TUnk_804A1E28();
    virtual void update_attack();
    virtual void update_weapon();
    u8 unk_1F8[0x8];
};

#endif
