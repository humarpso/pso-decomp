#ifndef PSO_PLAYER_TUNK_804E70A8_H
#define PSO_PLAYER_TUNK_804E70A8_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804E70A8 : public TItemWeapon {
public:
    virtual ~TUnk_804E70A8();
    virtual void emit_marker_effects();
    u8 unk_1F8[0xC];
};

#endif
