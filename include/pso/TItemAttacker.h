#ifndef PSO_TITEMATTACKER_H
#define PSO_TITEMATTACKER_H
#include "pso/TObject.h"
#include "types.h"

class TItemAttacker : public TObject {
public:
    TItemAttacker(s32 arg1, s32 arg2, s32 arg3, s32 arg4);
    virtual ~TItemAttacker();
    virtual void run_task();
public:
    void copy_from(void *arg1);
    static void spawn_item_timer(s32 arg0, s32 arg1, s32 arg2);
};

#endif
