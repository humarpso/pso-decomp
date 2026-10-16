#ifndef PSO_ITEM_TUNK_804A69DC_H
#define PSO_ITEM_TUNK_804A69DC_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A69DC : public TItemWeapon {
public:
    virtual ~TUnk_804A69DC();
    u8 unk_1F8[0x10];
};
typedef char TUnk_804A69DC_size[sizeof(TUnk_804A69DC) == 0x208 ? 1 : -1];

#endif
