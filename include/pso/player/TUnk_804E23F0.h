#ifndef PSO_PLAYER_TUNK_804E23F0_H
#define PSO_PLAYER_TUNK_804E23F0_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804E23F0 : public TItemWeapon {
public:
    virtual ~TUnk_804E23F0();
    u8 unk_1F8[0xC];
};
typedef char TUnk_804E23F0_size[sizeof(TUnk_804E23F0) == 0x204 ? 1 : -1];

#endif
