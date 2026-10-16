#ifndef PSO_ENEMY_TOBJENEBM3FLYNEST_CARRYFLY_H
#define PSO_ENEMY_TOBJENEBM3FLYNEST_CARRYFLY_H
#include "types.h"
#include "pso/TObject.h"

class TObjEneBm3FlyNest_CarryFly : public TObject {
public:
    virtual ~TObjEneBm3FlyNest_CarryFly();
    u8 unk_1C[0x4C];
};
typedef char TObjEneBm3FlyNest_CarryFly_size[sizeof(TObjEneBm3FlyNest_CarryFly) == 0x68 ? 1 : -1];

#endif
