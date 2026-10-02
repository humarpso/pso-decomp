#ifndef PSO_TOBJBAGWARNWIN_H
#define PSO_TOBJBAGWARNWIN_H
#include "pso/TObject.h"
#include "types.h"

class TObjBagWarnWin : public TObject {
public:
    virtual ~TObjBagWarnWin();
    virtual void run_task();
};

#endif
