#ifndef PSO_ENEMY_TOBJENEBM9MERICAROL_BOMB_H
#define PSO_ENEMY_TOBJENEBM9MERICAROL_BOMB_H
#include "types.h"
#include "pso/player/TUnk_804928CC.h"

class TObjEneBm9Mericarol_Bomb : public TUnk_804928CC {
public:
    virtual ~TObjEneBm9Mericarol_Bomb();
    virtual void render();
    virtual void run_task();
    u8 unk_B0[0x68];
};
typedef char TObjEneBm9Mericarol_Bomb_size[sizeof(TObjEneBm9Mericarol_Bomb) == 0x118 ? 1 : -1];

#endif
