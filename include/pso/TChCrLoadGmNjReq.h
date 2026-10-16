#ifndef PSO_TCHCRLOADGMNJREQ_H
#define PSO_TCHCRLOADGMNJREQ_H

#include "pso/TObject.h"
#include "types.h"

class TChCrLoadGmNjReq : public TObject {
public:
 u8 _pad1c[0x4c];
 void* m_68;

public:
    virtual ~TChCrLoadGmNjReq();
    void sub_8028C8A8();
    virtual void run_task();
};

#endif
