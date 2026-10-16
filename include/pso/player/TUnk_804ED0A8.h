#ifndef PSO_PLAYER_TUNK_804ED0A8_H
#define PSO_PLAYER_TUNK_804ED0A8_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804ED0A8 : public TItemWeapon {
public:
    virtual ~TUnk_804ED0A8();
    virtual void update_attack();
    void *init_state_1536(s32, void *);
    u8 unk_1F8[0x8];
};

#endif
