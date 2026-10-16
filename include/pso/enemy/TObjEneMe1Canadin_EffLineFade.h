#ifndef PSO_ENEMY_TOBJENEME1CANADIN_EFFLINEFADE_H
#define PSO_ENEMY_TOBJENEME1CANADIN_EFFLINEFADE_H
#include "types.h"
#include "pso/TObject.h"

class TObjEneMe1Canadin_EffLineFade : public TObject {
public:
    virtual ~TObjEneMe1Canadin_EffLineFade();
    virtual void render();
    virtual void run_task();
    u8 unk_1C[0x20];
};
typedef char TObjEneMe1Canadin_EffLineFade_size[sizeof(TObjEneMe1Canadin_EffLineFade) == 0x3C ? 1 : -1];

#endif
