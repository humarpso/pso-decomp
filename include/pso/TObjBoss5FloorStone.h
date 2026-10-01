#ifndef PSO_TOBJBOSS5FLOORSTONE_H
#define PSO_TOBJBOSS5FLOORSTONE_H
#include "pso/TObject.h"
#include "types.h"

class TObjBoss5FloorStone : public TObject {
public:
    virtual ~TObjBoss5FloorStone();
    virtual void run_task();
    virtual void render();
};

#endif
