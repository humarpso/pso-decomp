#ifndef PSO_TCHCRLOADAFS_H
#define PSO_TCHCRLOADAFS_H

#include "pso/TObject.h"
#include "types.h"

class TChCrLoadAfs : public TObject {
public:
    virtual ~TChCrLoadAfs();
    virtual void run_task();
};

#endif
