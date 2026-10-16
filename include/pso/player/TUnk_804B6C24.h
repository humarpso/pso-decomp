#ifndef PSO_PLAYER_TUNK_804B6C24_H
#define PSO_PLAYER_TUNK_804B6C24_H
#include "types.h"
#include "pso/player/TUnk_804806E8.h"

class TUnk_804B6C24 : public TUnk_804806E8 {
public:
    virtual ~TUnk_804B6C24();
    u8 unk_334[0x34];
};
typedef char TUnk_804B6C24_size[sizeof(TUnk_804B6C24) == 0x368 ? 1 : -1];

#endif
