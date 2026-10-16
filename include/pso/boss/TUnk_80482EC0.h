#ifndef PSO_BOSS_TUNK_80482EC0_H
#define PSO_BOSS_TUNK_80482EC0_H
#include "types.h"
#include "pso/boss/TBoss2Mine.h"

class TUnk_80482EC0 : public TBoss2Mine {
public:
    virtual ~TUnk_80482EC0();
    u8 unk_3B4[0x3C];
};
typedef char TUnk_80482EC0_size[sizeof(TUnk_80482EC0) == 0x3F0 ? 1 : -1];

#endif
