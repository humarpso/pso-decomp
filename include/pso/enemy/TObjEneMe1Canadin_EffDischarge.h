#ifndef PSO_ENEMY_TOBJENEME1CANADIN_EFFDISCHARGE_H
#define PSO_ENEMY_TOBJENEME1CANADIN_EFFDISCHARGE_H
#include "types.h"
#include "pso/TObject.h"

class TObjEneMe1Canadin_EffDischarge : public TObject {
public:
    virtual ~TObjEneMe1Canadin_EffDischarge();
    u8 unk_1C[0x4C];
};
typedef char TObjEneMe1Canadin_EffDischarge_size[sizeof(TObjEneMe1Canadin_EffDischarge) == 0x68 ? 1 : -1];

#endif
