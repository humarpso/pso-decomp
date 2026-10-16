#ifndef PSO_UNK_TUNK_804A5B20_H
#define PSO_UNK_TUNK_804A5B20_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A5B20 : public TItemWeapon {
public:
    virtual ~TUnk_804A5B20();
    virtual void update_attack();
    u8 unk_1F8[0x10];
};

#endif
