#ifndef PSO_PLAYER_TUNK_804E2000_H
#define PSO_PLAYER_TUNK_804E2000_H
#include "types.h"
#include "pso/player/TUnk_804E23F0.h"

class TUnk_804E2000 : public TUnk_804E23F0 {
public:
    virtual ~TUnk_804E2000();
    u8 unk_204[0x8];
};
typedef char TUnk_804E2000_size[sizeof(TUnk_804E2000) == 0x20C ? 1 : -1];

#endif
