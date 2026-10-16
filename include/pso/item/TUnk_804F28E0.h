#ifndef PSO_ITEM_TUNK_804F28E0_H
#define PSO_ITEM_TUNK_804F28E0_H
#include "types.h"
#include "pso/unk/TUnk_804A4948.h"

class TUnk_804F28E0 : public TUnk_804A4948 {
public:
    virtual ~TUnk_804F28E0();
    void*init(s32, void *);
    virtual void update_attack();
    virtual void emit_marker_effects();
    u8 unk_1C[0x1E4];
};

#endif
