#ifndef PSO_TQUESTBGMCTRL_H
#define PSO_TQUESTBGMCTRL_H

#include "pso/TObject.h"
#include "types.h"

class TQuestBgmCtrl : public TObject {
public:
    virtual ~TQuestBgmCtrl();
    virtual void run_task();
};

#endif
