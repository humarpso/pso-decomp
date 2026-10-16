#ifndef PSO_ITEM_TUNK_804A68C8_H
#define PSO_ITEM_TUNK_804A68C8_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A68C8 : public TItemWeapon {
public:
    virtual ~TUnk_804A68C8();
    u8 unk_1F8[0x8];
};
typedef char TUnk_804A68C8_size[sizeof(TUnk_804A68C8) == 0x200 ? 1 : -1];

#endif
