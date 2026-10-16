#ifndef PSO_TBOSS6DPB_H
#define PSO_TBOSS6DPB_H
#include "pso/TObject.h"
#include "types.h"

class TBoss6DPB : public TObject {
public:
    virtual ~TBoss6DPB();
    void apply_shower_damage_to_players();
    void sub_8035D8B0();
    virtual void run_task();
    virtual void render();
public:
    static void render();
};

#endif
