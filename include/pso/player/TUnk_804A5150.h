#ifndef PSO_PLAYER_TUNK_804A5150_H
#define PSO_PLAYER_TUNK_804A5150_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A5150 : public TItemWeapon {
public:
    virtual ~TUnk_804A5150();
    u8 unk_1F8[0x8];
};
typedef char TUnk_804A5150_size[sizeof(TUnk_804A5150) == 0x200 ? 1 : -1];

#endif
