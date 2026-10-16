#ifndef PSO_PLAYER_TUNK_804E3BA8_H
#define PSO_PLAYER_TUNK_804E3BA8_H
#include "types.h"
#include "pso/player/TUnk_804E3BD8.h"

class TUnk_804E3BA8 : public TUnk_804E3BD8 {
public:
    virtual ~TUnk_804E3BA8();
    virtual void render();
    u8 unk_2C[0x10];
};
typedef char TUnk_804E3BA8_size[sizeof(TUnk_804E3BA8) == 0x3C ? 1 : -1];

#endif
