#ifndef PSO_ITEM_TUNK_804A64E8_H
#define PSO_ITEM_TUNK_804A64E8_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A64E8 : public TItemWeapon {
public:
    virtual ~TUnk_804A64E8();
    virtual void update_attack();
    void*init_position_state();
    u8 unk_1F8[0x10];
};

#endif
