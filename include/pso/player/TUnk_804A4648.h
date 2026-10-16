#ifndef PSO_PLAYER_TUNK_804A4648_H
#define PSO_PLAYER_TUNK_804A4648_H
#include "types.h"
#include "pso/unk/TUnk_804A4948.h"

class TUnk_804A4648 : public TUnk_804A4948 {
public:
    virtual ~TUnk_804A4648();
    u8 unk_1C[0x1DC];
};
typedef char TUnk_804A4648_size[sizeof(TUnk_804A4648) == 0x1F8 ? 1 : -1];

#endif
