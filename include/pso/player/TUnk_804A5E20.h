#ifndef PSO_PLAYER_TUNK_804A5E20_H
#define PSO_PLAYER_TUNK_804A5E20_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A5E20 : public TItemWeapon {
public:
    virtual ~TUnk_804A5E20();
    virtual void emit_marker_effects();
    void *init_state_2();
};

#endif
