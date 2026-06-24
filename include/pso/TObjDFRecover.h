#ifndef PSO_TOBJDFRECOVER_H
#define PSO_TOBJDFRECOVER_H

#include "pso/TObject.h"
#include "types.h"

class TObjDFRecover : public TObject {
public:
    u8 _pad1C[0x10];
 void* m_2c;
public:
    virtual ~TObjDFRecover();
    virtual void run_task();
};

#endif
