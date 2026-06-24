#ifndef PSO_TOBJWARNCHIME_H
#define PSO_TOBJWARNCHIME_H

#include "pso/TObject.h"
#include "types.h"

class TObjWarnChime : public TObject {
public:
    virtual ~TObjWarnChime();
    virtual void run_task();
};

#endif
