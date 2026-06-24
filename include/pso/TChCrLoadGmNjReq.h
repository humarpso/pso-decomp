#ifndef PSO_TCHCRLOADGMNJREQ_H
#define PSO_TCHCRLOADGMNJREQ_H

#include "pso/TObject.h"
#include "types.h"

class TChCrLoadGmNjReq : public TObject {
public:
    virtual ~TChCrLoadGmNjReq();
    virtual void run_task();
};

#endif
