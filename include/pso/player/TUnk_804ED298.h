#ifndef PSO_PLAYER_TUNK_804ED298_H
#define PSO_PLAYER_TUNK_804ED298_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804ED298 : public TItemWeapon {
public:
    virtual ~TUnk_804ED298();
    void*set_mode_floats(s32, void *);
    u8 unk_1F8[0x8];
};

#endif
