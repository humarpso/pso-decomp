#ifndef PSO_ITEM_TUNK_804A4338_H
#define PSO_ITEM_TUNK_804A4338_H
#include "types.h"
#include "pso/unk/TUnk_804A4948.h"

class TUnk_804A4338 : public TUnk_804A4948 {
public:
    virtual ~TUnk_804A4338();
    virtual void emit_marker_effects();
    u8 unk_1C[0x170];
};

#endif
