#ifndef PSO_TITEMEFFCANE_H
#define PSO_TITEMEFFCANE_H

#include "pso/TObject.h"
#include "types.h"

class TItemEffCane : public TObject {
public:
 u8 _pad1C[0x20 - 0x1C];
 void* m_20;
public:
    virtual ~TItemEffCane();
    virtual void run_task();
};

#endif
