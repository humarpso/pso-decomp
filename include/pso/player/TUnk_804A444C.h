#ifndef PSO_PLAYER_TUNK_804A444C_H
#define PSO_PLAYER_TUNK_804A444C_H
#include "types.h"
#include "pso/unk/TUnk_804A4948.h"

class TUnk_804A444C : public TUnk_804A4948 {
public:
    virtual ~TUnk_804A444C();
    u8 unk_1C[0x1E8];
};
typedef char TUnk_804A444C_size[sizeof(TUnk_804A444C) == 0x204 ? 1 : -1];

#endif
