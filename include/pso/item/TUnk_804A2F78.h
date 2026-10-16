#ifndef PSO_ITEM_TUNK_804A2F78_H
#define PSO_ITEM_TUNK_804A2F78_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A2F78 : public TItemWeapon {
public:
    virtual ~TUnk_804A2F78();
    void*setup_effect();
    u8 unk_1F8[0xC];
};

#endif
