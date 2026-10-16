#ifndef PSO_ITEM_TUNK_804A1B40_H
#define PSO_ITEM_TUNK_804A1B40_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A1B40 : public TItemWeapon {
public:
    virtual ~TUnk_804A1B40();
};
typedef char TUnk_804A1B40_size[sizeof(TUnk_804A1B40) == 0x1F8 ? 1 : -1];

#endif
