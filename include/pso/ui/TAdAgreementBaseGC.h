#ifndef PSO_UI_TADAGREEMENTBASEGC_H
#define PSO_UI_TADAGREEMENTBASEGC_H

#include "types.h"
#include "pso/TObject.h"

struct TAdAgreementBaseGC : public TObject {
    virtual ~TAdAgreementBaseGC();
    virtual void vfunc_6();
    virtual void vfunc_7();
    virtual void vfunc_8();
    virtual void vfunc_9();
    virtual void vfunc_10();
    virtual void vfunc_11();
    virtual void vfunc_12();
    u32 m_1c;
    u8 _pad20[0x4];
    u32 m_24;
    u32 m_28;
    u32 m_2c;
    u32 m_30;
    u32 m_34;
    static void draw_agreement_text();};

typedef char TAdAgreementBaseGC_size[sizeof(TAdAgreementBaseGC) == 0x38 ? 1 : -1];
#endif
