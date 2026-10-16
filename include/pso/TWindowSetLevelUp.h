#ifndef PSO_TWINDOWSETLEVELUP_H
#define PSO_TWINDOWSETLEVELUP_H
#include "pso/TObject.h"
#include "types.h"

class TWindowSetLevelUp : public TObject {
public:
    virtual ~TWindowSetLevelUp();
    void update_stat_messages();
    virtual void run_task();
    virtual void render();
public:
    void copy_stat_block(s32 arg1);
};

#endif
