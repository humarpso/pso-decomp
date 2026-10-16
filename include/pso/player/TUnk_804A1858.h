#ifndef PSO_PLAYER_TUNK_804A1858_H
#define PSO_PLAYER_TUNK_804A1858_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A1858 : public TItemWeapon {
public:
    virtual ~TUnk_804A1858();
    u8 unk_1F8[0x4];
};
typedef char TUnk_804A1858_size[sizeof(TUnk_804A1858) == 0x1FC ? 1 : -1];

#endif
