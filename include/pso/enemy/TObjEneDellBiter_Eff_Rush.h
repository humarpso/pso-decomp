#ifndef PSO_ENEMY_TOBJENEDELLBITER_EFF_RUSH_H
#define PSO_ENEMY_TOBJENEDELLBITER_EFF_RUSH_H
#include "types.h"
#include "pso/TObject.h"

class TObjEneDellBiter_Eff_Rush : public TObject {
public:
    virtual ~TObjEneDellBiter_Eff_Rush();
    u8 unk_1C[0x18];
};
typedef char TObjEneDellBiter_Eff_Rush_size[sizeof(TObjEneDellBiter_Eff_Rush) == 0x34 ? 1 : -1];

#endif
