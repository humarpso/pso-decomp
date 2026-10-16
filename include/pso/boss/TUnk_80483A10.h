#ifndef PSO_BOSS_TUNK_80483A10_H
#define PSO_BOSS_TUNK_80483A10_H
#include "types.h"
#include "pso/enemy/TObjEnemyCustom.h"

class TUnk_80483A10 : public TObjEnemyCustom {
public:
    virtual ~TUnk_80483A10();
    virtual s32 vfunc_30();
    virtual void render();
    virtual void run_task();
    u8 unk_38C[0xC];
    s32 m_398;
    u8 unk_39C[0x38];
};
typedef char TUnk_80483A10_size[sizeof(TUnk_80483A10) == 0x3D4 ? 1 : -1];

#endif
