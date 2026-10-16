#ifndef PSO_BOSS_TUNK_80482D04_H
#define PSO_BOSS_TUNK_80482D04_H
#include "types.h"
#include "pso/boss/TBoss2Mine.h"

class TUnk_80482D04 : public TBoss2Mine {
public:
    virtual ~TUnk_80482D04();
    virtual void vfunc_88();
    void*create(int, int, int);
    u8 unk_3B4[0x5C];
};
typedef char TUnk_80482D04_size[sizeof(TUnk_80482D04) == 0x410 ? 1 : -1];

#endif
