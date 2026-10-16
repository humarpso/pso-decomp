#ifndef PSO_PLAYER_TUNK_804A3358_H
#define PSO_PLAYER_TUNK_804A3358_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A3358 : public TItemWeapon {
public:
    virtual ~TUnk_804A3358();
    virtual void emit_marker_effects();
    void *init_variant_34();
};

#endif
