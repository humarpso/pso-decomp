#ifndef PSO_PLAYER_TUNK_804A5F18_H
#define PSO_PLAYER_TUNK_804A5F18_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A5F18 : public TItemWeapon {
public:
    virtual ~TUnk_804A5F18();
    u8 unk_1F8[0x4];
};
typedef char TUnk_804A5F18_size[sizeof(TUnk_804A5F18) == 0x1FC ? 1 : -1];

#endif
