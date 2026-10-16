#ifndef PSO_UI_TADFLOORLOADCAMGC_H
#define PSO_UI_TADFLOORLOADCAMGC_H

#include "types.h"
#include "pso/TObject.h"

struct TAdFloorLoadCamGC : public TObject {
    virtual ~TAdFloorLoadCamGC();
    u32 m_1c;
    u32 m_20;
    u32 m_24;
    void* m_28;
    u8 _pad2C[0x8];
    void* m_34;
    u8 _pad38[0x8];
    void* m_40;
    virtual void render();
    virtual void run_task();
    u8 unk_44[0x8];
};

typedef char TAdFloorLoadCamGC_size[sizeof(TAdFloorLoadCamGC) == 0x4C ? 1 : -1];
#endif
