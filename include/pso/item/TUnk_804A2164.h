#ifndef PSO_ITEM_TUNK_804A2164_H
#define PSO_ITEM_TUNK_804A2164_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A2164 : public TItemWeapon {
public:
    virtual ~TUnk_804A2164();
    u8 unk_1F8[0x10];
};
typedef char TUnk_804A2164_size[sizeof(TUnk_804A2164) == 0x208 ? 1 : -1];

#endif
