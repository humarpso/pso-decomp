#ifndef PSO_TMCFORMATSEQUENCE_H
#define PSO_TMCFORMATSEQUENCE_H

#include "pso/TObject.h"
#include "types.h"

class TMCFormatSequence : public TObject {
public:
    u8 _pad1C[0x1C];
 void* m_38;
public:
    virtual ~TMCFormatSequence();
    virtual void run_task();
};

#endif
