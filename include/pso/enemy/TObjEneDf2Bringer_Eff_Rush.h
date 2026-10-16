#ifndef PSO_ENEMY_TOBJENEDF2BRINGER_EFF_RUSH_H
#define PSO_ENEMY_TOBJENEDF2BRINGER_EFF_RUSH_H
#include "types.h"
#include "pso/TObject.h"

class TObjEneDf2Bringer_Eff_Rush : public TObject {
public:
    virtual ~TObjEneDf2Bringer_Eff_Rush();
    u8 unk_1C[0x18];
};
typedef char TObjEneDf2Bringer_Eff_Rush_size[sizeof(TObjEneDf2Bringer_Eff_Rush) == 0x34 ? 1 : -1];

#endif
