#ifndef PSO_TDPBSHOWER_H
#define PSO_TDPBSHOWER_H

#include "pso/TObject.h"
#include "types.h"

class TDPBShower : public TObject {
public:
    u8 _pad1C[0x10];
 void* m_2c;
public:
    virtual ~TDPBShower();
    virtual void run_task();
};

#endif
