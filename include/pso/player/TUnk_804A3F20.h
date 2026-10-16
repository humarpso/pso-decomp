#ifndef PSO_PLAYER_TUNK_804A3F20_H
#define PSO_PLAYER_TUNK_804A3F20_H
#include "types.h"
#include "pso/unk/TUnk_804A4948.h"

class TUnk_804A3F20 : public TUnk_804A4948 {
public:
    virtual ~TUnk_804A3F20();
    virtual void reserved_53();
    virtual void emit_marker_effects();
    void *init_variant();
    u8 unk_1C[0x1D4];
};

#endif
