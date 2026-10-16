#ifndef PSO_PLAYER_TUNK_804A2564_H
#define PSO_PLAYER_TUNK_804A2564_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A2564 : public TItemWeapon {
public:
    virtual ~TUnk_804A2564();
    virtual void update_weapon();
    virtual void emit_marker_effects();
    u8 unk_1F8[0x48];
};

#endif
