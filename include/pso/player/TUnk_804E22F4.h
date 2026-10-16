#ifndef PSO_PLAYER_TUNK_804E22F4_H
#define PSO_PLAYER_TUNK_804E22F4_H
#include "types.h"
#include "pso/player/TUnk_804E23F0.h"

class TUnk_804E22F4 : public TUnk_804E23F0 {
public:
    virtual ~TUnk_804E22F4();
    u8 unk_204[0x8];
};
typedef char TUnk_804E22F4_size[sizeof(TUnk_804E22F4) == 0x20C ? 1 : -1];

#endif
