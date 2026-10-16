#ifndef PSO_ITEM_TUNK_804A6BD0_H
#define PSO_ITEM_TUNK_804A6BD0_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A6BD0 : public TItemWeapon {
public:
    virtual ~TUnk_804A6BD0();
    u8 unk_1F8[0x10];
};
typedef char TUnk_804A6BD0_size[sizeof(TUnk_804A6BD0) == 0x208 ? 1 : -1];

#endif
