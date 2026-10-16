#ifndef PSO_ENEMY_TOBJENEBM9MERICAROL_EFFCURSE3_H
#define PSO_ENEMY_TOBJENEBM9MERICAROL_EFFCURSE3_H
#include "types.h"
#include "pso/TObject.h"

class TObjEneBm9Mericarol_EffCurse3 : public TObject {
public:
    virtual ~TObjEneBm9Mericarol_EffCurse3();
    virtual void run_task();
    u8 unk_1C[0xC];
};
typedef char TObjEneBm9Mericarol_EffCurse3_size[sizeof(TObjEneBm9Mericarol_EffCurse3) == 0x28 ? 1 : -1];

#endif
