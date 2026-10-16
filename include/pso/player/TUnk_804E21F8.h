#ifndef PSO_PLAYER_TUNK_804E21F8_H
#define PSO_PLAYER_TUNK_804E21F8_H
#include "types.h"
#include "pso/player/TUnk_804E23F0.h"

class TUnk_804E21F8 : public TUnk_804E23F0 {
public:
    virtual ~TUnk_804E21F8();
    u8 unk_204[0x50];
};
typedef char TUnk_804E21F8_size[sizeof(TUnk_804E21F8) == 0x254 ? 1 : -1];

#endif
