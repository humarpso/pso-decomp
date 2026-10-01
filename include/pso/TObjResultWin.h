#ifndef PSO_TOBJRESULTWIN_H
#define PSO_TOBJRESULTWIN_H
#include "pso/TObject.h"
#include "types.h"

class TObjResultWin : public TObject {
public:
    virtual ~TObjResultWin();
    virtual void run_task();
};

#endif
