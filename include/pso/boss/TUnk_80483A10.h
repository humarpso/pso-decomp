#ifndef PSO_BOSS_TUNK_80483A10_H
#define PSO_BOSS_TUNK_80483A10_H
#include "types.h"
#include "pso/enemy/TObjEnemyCustom.h"

class TUnk_80483A10 : public TObjEnemyCustom {
public:
    virtual ~TUnk_80483A10();
    u8 unk_38C[0x48];
};
typedef char TUnk_80483A10_size[sizeof(TUnk_80483A10) == 0x3D4 ? 1 : -1];

#endif
