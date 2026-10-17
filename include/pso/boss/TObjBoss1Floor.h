#ifndef PSO_BOSS_TOBJBOSS1FLOOR_H
#define PSO_BOSS_TOBJBOSS1FLOOR_H
#include "types.h"
#include "pso/TObject.h"

class TObjBoss1Floor : public TObject {
public:
    virtual ~TObjBoss1Floor();
    virtual void render();
    virtual void run_task();
    u8 unk_1C[0x1C];
};
typedef char TObjBoss1Floor_size[sizeof(TObjBoss1Floor) == 0x38 ? 1 : -1];

#endif
