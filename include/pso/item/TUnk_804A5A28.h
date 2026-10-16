#ifndef PSO_ITEM_TUNK_804A5A28_H
#define PSO_ITEM_TUNK_804A5A28_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A5A28 : public TItemWeapon {
public:
    virtual ~TUnk_804A5A28();
    virtual void emit_marker_effects();
    void *init_variant_2_5a28();
};

#endif
