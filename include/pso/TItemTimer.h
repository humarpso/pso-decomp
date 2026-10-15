#ifndef PSO_TITEMTIMER_H
#define PSO_TITEMTIMER_H

#include "pso/TObject.h"
#include "types.h"

class TItemTimer : public TObject {
public:
    virtual ~TItemTimer();
    virtual void run_task();

    s32 m_1C;
    void* m_20;
public:
    void invoke_callback();
    void reset_fields();
    void apply_to_player();
    void set_owner_flag_800();
    void update_owner_state();
};

#endif
