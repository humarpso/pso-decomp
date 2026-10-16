#ifndef PSO_OBJECT_TOBJTRADECOLLISION_H
#define PSO_OBJECT_TOBJTRADECOLLISION_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjTradeCollision : public TUnk_804AF8A0 {
    virtual ~TObjTradeCollision();
    bool is_player_outside_trade_radius(u32);
    virtual void run_task();
    virtual void render();
    u8 unk_AC[0x4];
};

typedef char TObjTradeCollision_size[sizeof(TObjTradeCollision) == 0xB0 ? 1 : -1];
#endif
