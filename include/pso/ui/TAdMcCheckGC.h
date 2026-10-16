#ifndef PSO_UI_TADMCCHECKGC_H
#define PSO_UI_TADMCCHECKGC_H

#include "types.h"
#include "pso/TObject.h"

struct TAdMcCheckGC : public TObject {
    TAdMcCheckGC(TObject *arg1, void *arg2);
    virtual ~TAdMcCheckGC();
    u32 m_1c;
    u32 m_20;
    u32 m_24;
    u32 m_28;
    u32 m_2c;
    u32 m_30;
    u32 m_34;
    u32 m_38;
    virtual void render();
    s32 create(s32 arg1);
    virtual void run_task();};

typedef char TAdMcCheckGC_size[sizeof(TAdMcCheckGC) == 0x3C ? 1 : -1];
#endif
