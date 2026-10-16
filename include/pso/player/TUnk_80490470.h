#ifndef PSO_PLAYER_TUNK_80490470_H
#define PSO_PLAYER_TUNK_80490470_H
#include "types.h"
#include "pso/player/TUnk_80494AE0.h"

class TUnk_80490470 : public TUnk_80494AE0 {
public:
    virtual ~TUnk_80490470();
    void*init_vtable_and_field18();
    void calc_recoil_offsets();
    u8 unk_18[0x4];
};

#endif
