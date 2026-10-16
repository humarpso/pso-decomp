#ifndef PSO_PLAYER_TUNK_804E3BD8_H
#define PSO_PLAYER_TUNK_804E3BD8_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804E3BD8 : public TObject {
public:
    virtual ~TUnk_804E3BD8();
    u8 unk_1C[0x10];
};
typedef char TUnk_804E3BD8_size[sizeof(TUnk_804E3BD8) == 0x2C ? 1 : -1];

#endif
