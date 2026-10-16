#ifndef PSO_MISC_TWINDOWSUBAREAMAPDISP_H
#define PSO_MISC_TWINDOWSUBAREAMAPDISP_H

#include "types.h"
#include "pso/misc/TUnk_804CE018.h"

struct TWindowSubAreaMapDisp : public TUnk_804CE018 {
    virtual ~TWindowSubAreaMapDisp();
    u8 _pad1C[0x4];
    s16 m_20;
    u8 _pad22[0x3A];
    u32 m_5c;
    u8 _pad60[0xC];
    u32 m_6c;
    u32 m_70;
    u32 m_74;
    void update_manual_scroll();
    virtual void render();
    virtual void run_task();
    void update_visibility();};

typedef char TWindowSubAreaMapDisp_size[sizeof(TWindowSubAreaMapDisp) == 0x78 ? 1 : -1];
#endif
