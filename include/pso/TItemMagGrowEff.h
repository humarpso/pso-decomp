#ifndef PSO_TITEMMAGGROWEFF_H
#define PSO_TITEMMAGGROWEFF_H

#include "pso/TObject.h"
#include "types.h"

class TItemMagGrowEff : public TObject {
public:
    u8 _pad1C[0x4];
 void* m_20;
 void* m_24;

    virtual ~TItemMagGrowEff();
    virtual void run_task();
};

#endif
