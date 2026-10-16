#ifndef PSO_ITEM_TUNK_804A6AD8_H
#define PSO_ITEM_TUNK_804A6AD8_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A6AD8 : public TItemWeapon {
public:
    virtual ~TUnk_804A6AD8();
    u8 unk_1F8[0x10];
};
typedef char TUnk_804A6AD8_size[sizeof(TUnk_804A6AD8) == 0x208 ? 1 : -1];

#endif
