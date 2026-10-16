#ifndef PSO_ITEM_TUNK_804A2164_H
#define PSO_ITEM_TUNK_804A2164_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A2164 : public TItemWeapon {
public:
    virtual ~TUnk_804A2164();
    virtual void update_weapon();
    u8 unk_1F8[0x10];
};

#endif
