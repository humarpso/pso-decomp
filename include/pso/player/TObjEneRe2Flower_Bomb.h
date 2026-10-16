#ifndef PSO_PLAYER_TOBJENERE2FLOWER_BOMB_H
#define PSO_PLAYER_TOBJENERE2FLOWER_BOMB_H
#include "types.h"
#include "pso/player/TUnk_804928CC.h"

class TObjEneRe2Flower_Bomb : public TUnk_804928CC {
public:
    virtual ~TObjEneRe2Flower_Bomb();
    u8 unk_B0[0x54];
};
typedef char TObjEneRe2Flower_Bomb_size[sizeof(TObjEneRe2Flower_Bomb) == 0x104 ? 1 : -1];

#endif
