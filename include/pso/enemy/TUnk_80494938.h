#ifndef PSO_ENEMY_TUNK_80494938_H
#define PSO_ENEMY_TUNK_80494938_H
#include "types.h"
#include "pso/player/TUnk_80494AE0.h"

class TUnk_80494938 : public TUnk_80494AE0 {
public:
    virtual ~TUnk_80494938();
    u8 unk_18[0x4];
};
typedef char TUnk_80494938_size[sizeof(TUnk_80494938) == 0x1C ? 1 : -1];

#endif
