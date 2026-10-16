#ifndef PSO_ENEMY_TOBJENEME1CANADIN_EFFLIGHT_H
#define PSO_ENEMY_TOBJENEME1CANADIN_EFFLIGHT_H
#include "types.h"
#include "pso/TObject.h"

class TObjEneMe1Canadin_EffLight : public TObject {
public:
    virtual ~TObjEneMe1Canadin_EffLight();
    virtual void render();
    virtual void run_task();
    u8 unk_1C[0x1C];
};
typedef char TObjEneMe1Canadin_EffLight_size[sizeof(TObjEneMe1Canadin_EffLight) == 0x38 ? 1 : -1];

#endif
