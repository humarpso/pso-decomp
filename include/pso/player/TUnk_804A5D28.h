#ifndef PSO_PLAYER_TUNK_804A5D28_H
#define PSO_PLAYER_TUNK_804A5D28_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A5D28 : public TItemWeapon {
public:
    virtual ~TUnk_804A5D28();
    u8 unk_1F8[0x8];
};
typedef char TUnk_804A5D28_size[sizeof(TUnk_804A5D28) == 0x200 ? 1 : -1];

#endif
