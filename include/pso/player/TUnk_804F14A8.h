#ifndef PSO_PLAYER_TUNK_804F14A8_H
#define PSO_PLAYER_TUNK_804F14A8_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804F14A8 : public TItemWeapon {
public:
    virtual ~TUnk_804F14A8();
    u8 unk_1F8[0x4];
};
typedef char TUnk_804F14A8_size[sizeof(TUnk_804F14A8) == 0x1FC ? 1 : -1];

#endif
