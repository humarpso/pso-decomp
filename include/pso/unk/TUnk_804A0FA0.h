#ifndef PSO_UNK_TUNK_804A0FA0_H
#define PSO_UNK_TUNK_804A0FA0_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A0FA0 : public TItemWeapon {
public:
    virtual ~TUnk_804A0FA0();
    u8 unk_1F8[0x4];
};
typedef char TUnk_804A0FA0_size[sizeof(TUnk_804A0FA0) == 0x1FC ? 1 : -1];

#endif
