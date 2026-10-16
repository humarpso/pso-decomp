#ifndef PSO_UI_TADPLYPLTANIMGC_H
#define PSO_UI_TADPLYPLTANIMGC_H

#include "types.h"
#include "pso/TObject.h"

struct TAdPlyPltAnimGC : public TObject {
    virtual ~TAdPlyPltAnimGC();
    virtual void run_task();
    virtual void render();
    u8 unk_1C[0x34];
    u8 m_6c;
    u8 _pad6D[0x3];
    u32 m_70;
    u32 m_74;
    u32 m_78;
    u8 unk_60[0x1C];
};

typedef char TAdPlyPltAnimGC_size[sizeof(TAdPlyPltAnimGC) == 0x7C ? 1 : -1];
#endif
