#ifndef PSO_PLAYER_TUNK_804C4540_H
#define PSO_PLAYER_TUNK_804C4540_H
#include "types.h"
#include "pso/player/TObjPlayer.h"

class TUnk_804C4540 : public TObjPlayer {
public:
    virtual ~TUnk_804C4540();
    u8 unk_DB0[0x8];
};
typedef char TUnk_804C4540_size[sizeof(TUnk_804C4540) == 0xDB8 ? 1 : -1];

#endif
