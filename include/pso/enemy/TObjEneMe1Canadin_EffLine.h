#ifndef PSO_ENEMY_TOBJENEME1CANADIN_EFFLINE_H
#define PSO_ENEMY_TOBJENEME1CANADIN_EFFLINE_H
#include "types.h"
#include "pso/TObject.h"

class TObjEneMe1Canadin_EffLine : public TObject {
public:
    virtual ~TObjEneMe1Canadin_EffLine();
    virtual void render();
    virtual void run_task();
    u8 unk_1C[0x2C];
};
typedef char TObjEneMe1Canadin_EffLine_size[sizeof(TObjEneMe1Canadin_EffLine) == 0x48 ? 1 : -1];

#endif
