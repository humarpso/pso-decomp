#ifndef PSO_ENEMY_TOBJENEBM9MERICAROL_EFFCURSE3_H
#define PSO_ENEMY_TOBJENEBM9MERICAROL_EFFCURSE3_H
#include "types.h"
#include "pso/TObject.h"

class TObjEneBm9Mericarol_EffCurse3 : public TObject {
public:
    virtual ~TObjEneBm9Mericarol_EffCurse3();
    void *construct(s32, s32);
    void *destroy(s16);
    virtual void run_task();
    u8 unk_1C[0x4];
    s32 m_20;
    u8 unk_24[0x4];
};
typedef char TObjEneBm9Mericarol_EffCurse3_size[sizeof(TObjEneBm9Mericarol_EffCurse3) == 0x28 ? 1 : -1];

#endif
