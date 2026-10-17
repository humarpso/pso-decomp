#ifndef PSO_TITEMEFFHEAVEN_H
#define PSO_TITEMEFFHEAVEN_H

#include "pso/TObject.h"
#include "types.h"

class TItemEffHeaven : public TObject {
public:
 u8 _pad1c[0x10];
 void* m_arr[3];

public:
    TItemEffHeaven(TObject *parent, s32 a, s16 b, s32 c);
    virtual ~TItemEffHeaven();
    virtual void run_task();
};

#endif
