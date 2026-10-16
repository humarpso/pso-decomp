#ifndef PSO_ITEM_TUNK_804A4D70_H
#define PSO_ITEM_TUNK_804A4D70_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A4D70 : public TItemWeapon {
public:
    virtual ~TUnk_804A4D70();
    u8 unk_1F8[0x28];
};
typedef char TUnk_804A4D70_size[sizeof(TUnk_804A4D70) == 0x220 ? 1 : -1];

#endif
