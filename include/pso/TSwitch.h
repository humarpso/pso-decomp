#ifndef PSO_TSWITCH_H
#define PSO_TSWITCH_H
#include "pso/TObject.h"
#include "types.h"

class TSwitch : public TObject {
public:
    TSwitch(TObject *parent);
    virtual ~TSwitch();
    virtual void run_task();
    virtual void render();

    u8 m_1c;
    u32 m_20;
    u32 m_24;
};

#endif
