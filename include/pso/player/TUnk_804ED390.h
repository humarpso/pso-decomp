#ifndef PSO_PLAYER_TUNK_804ED390_H
#define PSO_PLAYER_TUNK_804ED390_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804ED390 : public TItemWeapon {
public:
    virtual ~TUnk_804ED390();
    u8 unk_1F8[0x4];
};
typedef char TUnk_804ED390_size[sizeof(TUnk_804ED390) == 0x1FC ? 1 : -1];

#endif
