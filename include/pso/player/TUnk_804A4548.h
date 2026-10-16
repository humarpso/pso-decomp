#ifndef PSO_PLAYER_TUNK_804A4548_H
#define PSO_PLAYER_TUNK_804A4548_H
#include "types.h"
#include "pso/unk/TUnk_804A4948.h"

class TUnk_804A4548 : public TUnk_804A4948 {
public:
    virtual ~TUnk_804A4548();
    u8 unk_1C[0x1E8];
};
typedef char TUnk_804A4548_size[sizeof(TUnk_804A4548) == 0x204 ? 1 : -1];

#endif
