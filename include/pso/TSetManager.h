#ifndef PSO_TSETMANAGER_H
#define PSO_TSETMANAGER_H

#include "pso/TObject.h"
#include "types.h"

class TSetManager : public TObject {
public:
    virtual ~TSetManager();
    virtual void run_task();
public:
    static void create();
    void update_decoration_spawning();
    void apply_floor_set_rows();
};

#endif
