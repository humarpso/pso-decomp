#ifndef PSO_PLAYER_TUNK_804F0810_H
#define PSO_PLAYER_TUNK_804F0810_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804F0810 : public TItemWeapon {
public:
    virtual ~TUnk_804F0810();
    void *enter_timed_state(s32, void *);
    u8 unk_1F8[0x4];
};

#endif
