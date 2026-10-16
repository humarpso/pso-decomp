#ifndef PSO_TCHCREFFTAGSTR_H
#define PSO_TCHCREFFTAGSTR_H
#include "pso/TObject.h"
#include "types.h"

class TChCrEffTagStr : public TObject {
public:
    TChCrEffTagStr(TObject *arg1, void *arg2, void *arg3);
    virtual ~TChCrEffTagStr();
    virtual void run_task();
    virtual void render();
};

#endif
