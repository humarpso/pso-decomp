#ifndef PSO_UI_TADLICAGREEMENTGC_H
#define PSO_UI_TADLICAGREEMENTGC_H

#include "types.h"
#include "pso/ui/TAdAgreementBaseGC.h"

struct TAdLicAgreementGC : public TAdAgreementBaseGC {
    virtual ~TAdLicAgreementGC();
    u32 m_38;
    virtual void render();
    virtual void run_task();};

typedef char TAdLicAgreementGC_size[sizeof(TAdLicAgreementGC) == 0x3C ? 1 : -1];
#endif
