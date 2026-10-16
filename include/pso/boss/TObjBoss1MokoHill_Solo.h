#ifndef PSO_BOSS_TOBJBOSS1MOKOHILL_SOLO_H
#define PSO_BOSS_TOBJBOSS1MOKOHILL_SOLO_H
#include "types.h"
#include "pso/TObject.h"

class TObjBoss1MokoHill_Solo : public TObject {
public:
    virtual ~TObjBoss1MokoHill_Solo();
    virtual void render();
    virtual void run_task();
    u8 unk_1C[0x34];
};
typedef char TObjBoss1MokoHill_Solo_size[sizeof(TObjBoss1MokoHill_Solo) == 0x50 ? 1 : -1];

#endif
