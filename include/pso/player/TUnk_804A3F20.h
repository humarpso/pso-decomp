#ifndef PSO_PLAYER_TUNK_804A3F20_H
#define PSO_PLAYER_TUNK_804A3F20_H
#include "types.h"
#include "pso/unk/TUnk_804A4948.h"

class TUnk_804A3F20 : public TUnk_804A4948 {
public:
    virtual ~TUnk_804A3F20();
    u8 unk_1C[0x1D4];
};
typedef char TUnk_804A3F20_size[sizeof(TUnk_804A3F20) == 0x1F0 ? 1 : -1];

#endif
