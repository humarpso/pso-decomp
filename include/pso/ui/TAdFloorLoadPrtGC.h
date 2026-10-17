#ifndef PSO_UI_TADFLOORLOADPRTGC_H
#define PSO_UI_TADFLOORLOADPRTGC_H

#include "types.h"
#include "pso/TObject.h"

struct TAdFloorLoadPrtGC : public TObject {
    virtual ~TAdFloorLoadPrtGC();
    void* m_1c;
    u8 _pad20[0x37C];
    u32 m_39c;
    virtual void render();
    virtual void run_task();
};

typedef char TAdFloorLoadPrtGC_size[sizeof(TAdFloorLoadPrtGC) == 0x3A0 ? 1 : -1];
#endif
