#ifndef PSO_ITEM_TUNK_804A1D30_H
#define PSO_ITEM_TUNK_804A1D30_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A1D30 : public TItemWeapon {
public:
    virtual ~TUnk_804A1D30();
    virtual void update_attack();
    u8 unk_1F8[0xC];
};

#endif
