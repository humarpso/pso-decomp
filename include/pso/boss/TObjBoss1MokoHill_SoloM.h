#ifndef PSO_BOSS_TOBJBOSS1MOKOHILL_SOLOM_H
#define PSO_BOSS_TOBJBOSS1MOKOHILL_SOLOM_H
#include "types.h"
#include "pso/TObject.h"

class TObjBoss1MokoHill_SoloM : public TObject {
public:
    virtual ~TObjBoss1MokoHill_SoloM();
    virtual void render();
    virtual void run_task();
    u8 unk_1C[0x24];
};
typedef char TObjBoss1MokoHill_SoloM_size[sizeof(TObjBoss1MokoHill_SoloM) == 0x40 ? 1 : -1];

#endif
