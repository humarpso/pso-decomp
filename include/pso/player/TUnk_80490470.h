#ifndef PSO_PLAYER_TUNK_80490470_H
#define PSO_PLAYER_TUNK_80490470_H
#include "types.h"
#include "pso/player/TUnk_80494AE0.h"

class TUnk_80490470 : public TUnk_80494AE0 {
public:
    virtual ~TUnk_80490470();
    u8 unk_18[0x4];
};
typedef char TUnk_80490470_size[sizeof(TUnk_80490470) == 0x1C ? 1 : -1];

#endif
