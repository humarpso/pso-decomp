#ifndef PSO_MISC_TWINDOWSIMPLESTATUS_H
#define PSO_MISC_TWINDOWSIMPLESTATUS_H

#include "types.h"
#include "pso/misc/TUnk_804CE018.h"

struct TWindowSimpleStatus : public TUnk_804CE018 {
    virtual ~TWindowSimpleStatus();
    virtual void render();
    u8 _pad1C[0x4];
    u16 m_20;
    u8 _pad22[0x2];
    void* m_24;
    u8 unk_28[0x2C];
    f32 m_54;
    u8 unk_58[0x8];
    u32 m_60;
    virtual void run_task();
    void *create(void *arg1);
    u8 unk_64[0x14];
};

typedef char TWindowSimpleStatus_size[sizeof(TWindowSimpleStatus) == 0x78 ? 1 : -1];
#endif
