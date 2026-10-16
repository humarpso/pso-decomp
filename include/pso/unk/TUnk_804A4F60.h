#ifndef PSO_UNK_TUNK_804A4F60_H
#define PSO_UNK_TUNK_804A4F60_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A4F60 : public TItemWeapon {
public:
    virtual ~TUnk_804A4F60();
    u8 unk_1F8[0x84];
};
typedef char TUnk_804A4F60_size[sizeof(TUnk_804A4F60) == 0x27C ? 1 : -1];

#endif
