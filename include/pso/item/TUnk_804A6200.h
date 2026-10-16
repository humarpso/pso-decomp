#ifndef PSO_ITEM_TUNK_804A6200_H
#define PSO_ITEM_TUNK_804A6200_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A6200 : public TItemWeapon {
public:
    virtual ~TUnk_804A6200();
    u8 unk_1F8[0xC];
};
typedef char TUnk_804A6200_size[sizeof(TUnk_804A6200) == 0x204 ? 1 : -1];

#endif
