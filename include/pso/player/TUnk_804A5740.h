#ifndef PSO_PLAYER_TUNK_804A5740_H
#define PSO_PLAYER_TUNK_804A5740_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A5740 : public TItemWeapon {
public:
    virtual ~TUnk_804A5740();
    u8 unk_1F8[0x4];
};
typedef char TUnk_804A5740_size[sizeof(TUnk_804A5740) == 0x1FC ? 1 : -1];

#endif
