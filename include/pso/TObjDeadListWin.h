#ifndef PSO_TOBJDEADLISTWIN_H
#define PSO_TOBJDEADLISTWIN_H

#include "pso/TObject.h"
#include "types.h"

class TObjDeadListWin : public TObject {
public:
    virtual ~TObjDeadListWin();
    virtual void run_task();
};

#endif
