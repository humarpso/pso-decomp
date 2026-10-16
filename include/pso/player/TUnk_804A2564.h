#ifndef PSO_PLAYER_TUNK_804A2564_H
#define PSO_PLAYER_TUNK_804A2564_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A2564 : public TItemWeapon {
public:
    virtual ~TUnk_804A2564();
    u8 unk_1F8[0x48];
};
typedef char TUnk_804A2564_size[sizeof(TUnk_804A2564) == 0x240 ? 1 : -1];

#endif
