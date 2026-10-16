#ifndef PSO_PLAYER_TUNK_804F0A00_H
#define PSO_PLAYER_TUNK_804F0A00_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804F0A00 : public TItemWeapon {
public:
    virtual ~TUnk_804F0A00();
    virtual void update_attack();
    u8 unk_1F8[0xC];
};

#endif
