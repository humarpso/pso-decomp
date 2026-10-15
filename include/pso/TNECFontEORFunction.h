#ifndef PSO_TNECFONTEORFUNCTION_H
#define PSO_TNECFONTEORFUNCTION_H

#include "pso/TObject.h"
#include "types.h"

class TNECFontEORFunction : public TObject {
public:
    virtual ~TNECFontEORFunction();
    virtual void run_task();
public:
    static void run_task();
};

#endif
