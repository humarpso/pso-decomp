#ifndef PSO_TOBJDFBEAMCURSOR_H
#define PSO_TOBJDFBEAMCURSOR_H

#include "pso/TObject.h"
#include "types.h"

class TObjDFBeamCursor : public TObject {
public:
    virtual ~TObjDFBeamCursor();
    virtual void run_task();
};

#endif
