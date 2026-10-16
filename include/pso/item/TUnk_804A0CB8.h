#ifndef PSO_ITEM_TUNK_804A0CB8_H
#define PSO_ITEM_TUNK_804A0CB8_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A0CB8 : public TItemWeapon {
public:
    virtual ~TUnk_804A0CB8();
    u8 unk_1F8[0x4];
};
typedef char TUnk_804A0CB8_size[sizeof(TUnk_804A0CB8) == 0x1FC ? 1 : -1];

#endif
