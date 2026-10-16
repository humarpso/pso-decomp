#ifndef PSO_ITEM_TUNK_804A3928_H
#define PSO_ITEM_TUNK_804A3928_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A3928 : public TItemWeapon {
public:
    virtual ~TUnk_804A3928();
    virtual void update_attack();
    void*init_shot_params();
    u8 unk_1F8[0xC];
};

#endif
