#ifndef PSO_ENEMY_TOBJENERE2FLOWER_EFFCURSE3_H
#define PSO_ENEMY_TOBJENERE2FLOWER_EFFCURSE3_H
#include "types.h"
#include "pso/TObject.h"

class TObjEneRe2Flower_EffCurse3 : public TObject {
public:
    virtual ~TObjEneRe2Flower_EffCurse3();
    void *init_target_ref(s32, s32);
    void *dt_with_child_destroy(s16);
    virtual void run_task();
    u8 unk_1C[0xC];
};
typedef char TObjEneRe2Flower_EffCurse3_size[sizeof(TObjEneRe2Flower_EffCurse3) == 0x28 ? 1 : -1];

#endif
