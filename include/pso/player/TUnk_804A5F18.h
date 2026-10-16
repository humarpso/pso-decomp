#ifndef PSO_PLAYER_TUNK_804A5F18_H
#define PSO_PLAYER_TUNK_804A5F18_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A5F18 : public TItemWeapon {
public:
    virtual ~TUnk_804A5F18();
    virtual void update_attack();
    u8 unk_1F8[0x4];
};

#endif
