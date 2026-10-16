#ifndef PSO_ITEM_TUNK_804A1098_H
#define PSO_ITEM_TUNK_804A1098_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A1098 : public TItemWeapon {
public:
    virtual ~TUnk_804A1098();
    u8 unk_1F8[0x8];
};
typedef char TUnk_804A1098_size[sizeof(TUnk_804A1098) == 0x200 ? 1 : -1];

#endif
