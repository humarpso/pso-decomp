#ifndef PSO_PLAYER_TUNK_804ECFB0_H
#define PSO_PLAYER_TUNK_804ECFB0_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804ECFB0 : public TItemWeapon {
public:
    virtual ~TUnk_804ECFB0();
    virtual void update_weapon();
    u8 unk_1F8[0x8];
};

#endif
