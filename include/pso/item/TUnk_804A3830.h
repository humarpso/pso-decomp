#ifndef PSO_ITEM_TUNK_804A3830_H
#define PSO_ITEM_TUNK_804A3830_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A3830 : public TItemWeapon {
public:
    virtual ~TUnk_804A3830();
    virtual void reserved_53();
    void *construct_state_variant();
};

#endif
