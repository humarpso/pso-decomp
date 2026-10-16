#ifndef PSO_UI_TADWARNINGBASEGC_H
#define PSO_UI_TADWARNINGBASEGC_H

#include "types.h"
#include "pso/TObject.h"

struct TAdWarningBaseGC : public TObject {
    virtual ~TAdWarningBaseGC();
    virtual int vfunc_6();
    virtual void vfunc_7();
    virtual void vfunc_8();
    virtual void vfunc_9();
    u32 m_1c;
    u32 m_20;
    u32 m_24;
    u32 m_28;
    u32 m_2c;
    int destroy();
    static void create();
    static void init_heap();};

typedef char TAdWarningBaseGC_size[sizeof(TAdWarningBaseGC) == 0x30 ? 1 : -1];
#endif
