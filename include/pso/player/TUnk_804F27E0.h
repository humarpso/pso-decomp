#ifndef PSO_PLAYER_TUNK_804F27E0_H
#define PSO_PLAYER_TUNK_804F27E0_H
#include "types.h"
#include "pso/unk/TUnk_804A4948.h"

class TUnk_804F27E0 : public TUnk_804A4948 {
public:
    virtual ~TUnk_804F27E0();
    u8 unk_1C[0x1E4];
};
typedef char TUnk_804F27E0_size[sizeof(TUnk_804F27E0) == 0x200 ? 1 : -1];

#endif
