#ifndef PSO_BOSS_TOBJBOSS1CRATER_H
#define PSO_BOSS_TOBJBOSS1CRATER_H

#include "types.h"
#include "pso/player/TUnk_804928CC.h"

struct TObjBoss1Crater : public TUnk_804928CC {
    virtual ~TObjBoss1Crater();
    u8 unk_B0[0x1C];
};

typedef char TObjBoss1Crater_size[sizeof(TObjBoss1Crater) == 0xCC ? 1 : -1];
#endif
