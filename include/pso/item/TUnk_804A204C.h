#ifndef PSO_ITEM_TUNK_804A204C_H
#define PSO_ITEM_TUNK_804A204C_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A204C : public TItemWeapon {
public:
    virtual ~TUnk_804A204C();
    u8 unk_1F8[0x10];
};
typedef char TUnk_804A204C_size[sizeof(TUnk_804A204C) == 0x208 ? 1 : -1];

#endif
