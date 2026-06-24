#ifndef PSO_TSETEVTDESTROY_H
#define PSO_TSETEVTDESTROY_H

#include "pso/TObject.h"
#include "types.h"

class TSetEvtDestroy : public TObject {
public:
 s16* m_1c;
 u8 _pad20[0x10];
 void* m_30;

public:
    virtual ~TSetEvtDestroy();
    virtual void run_task();
};

#endif
