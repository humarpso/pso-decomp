#ifndef PSO_TCHALLENGE4PITEMSELECT_H
#define PSO_TCHALLENGE4PITEMSELECT_H

#include "pso/TObject.h"
#include "types.h"

class TChallenge4PItemSelect : public TObject {
public:
    u8 _pad1C[0x10];
 void* m_2c;
public:
    virtual ~TChallenge4PItemSelect();
    virtual void run_task();
};

#endif
