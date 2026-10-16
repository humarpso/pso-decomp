#ifndef PSO_ITEM_TUNK_804A2A58_H
#define PSO_ITEM_TUNK_804A2A58_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A2A58 : public TItemWeapon {
public:
    virtual ~TUnk_804A2A58();
    u8 unk_1F8[0x8];
};
typedef char TUnk_804A2A58_size[sizeof(TUnk_804A2A58) == 0x200 ? 1 : -1];

#endif
