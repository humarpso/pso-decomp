#ifndef PSO_ENEMY_TOBJENEDF2BRINGER_EFF_RUSH_H
#define PSO_ENEMY_TOBJENEDF2BRINGER_EFF_RUSH_H
#include "types.h"
#include "pso/TObject.h"

class TObjEneDf2Bringer_Eff_Rush : public TObject {
public:
    virtual ~TObjEneDf2Bringer_Eff_Rush();
    virtual void run_task();
    virtual void render();
    u8 unk_1C[0x4];
    f32 m_20;
    u8 unk_24[0x4];
    f32 m_28;
    u8 unk_2C[0x4];
    s32 m_30;
};
typedef char TObjEneDf2Bringer_Eff_Rush_size[sizeof(TObjEneDf2Bringer_Eff_Rush) == 0x34 ? 1 : -1];

#endif
