#ifndef PSO_TOBJSOLOPLAYWIN_H
#define PSO_TOBJSOLOPLAYWIN_H

#include "pso/TObject.h"
#include "types.h"

class TObjSoloPlayWin : public TObject {
public:
    virtual ~TObjSoloPlayWin();
    virtual void run_task();
};

#endif
