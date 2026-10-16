#ifndef PSO_ITEM_TUNK_804A0DB0_H
#define PSO_ITEM_TUNK_804A0DB0_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A0DB0 : public TItemWeapon {
public:
    virtual ~TUnk_804A0DB0();
    u8 unk_1F8[0xC];
};
typedef char TUnk_804A0DB0_size[sizeof(TUnk_804A0DB0) == 0x204 ? 1 : -1];

#endif
