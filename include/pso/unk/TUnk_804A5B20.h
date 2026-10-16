#ifndef PSO_UNK_TUNK_804A5B20_H
#define PSO_UNK_TUNK_804A5B20_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A5B20 : public TItemWeapon {
public:
    virtual ~TUnk_804A5B20();
    u8 unk_1F8[0x10];
};
typedef char TUnk_804A5B20_size[sizeof(TUnk_804A5B20) == 0x208 ? 1 : -1];

#endif
