#ifndef PSO_TQUESTTHREAD_H
#define PSO_TQUESTTHREAD_H
#include "pso/TObject.h"
#include "types.h"

class TQuestThread : public TObject {
public:
    virtual ~TQuestThread();
    void destroy_quest_obj();
    virtual void run_task();
public:
    s32 tick_com_card();
    s32 update_board_card();
    s32 update_com_card();
};

#endif
