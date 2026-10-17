#ifndef PSO_MISC_TWINDOWSUBAREAMAPDISP_H
#define PSO_MISC_TWINDOWSUBAREAMAPDISP_H

#include "types.h"
#include "pso/misc/TUnk_804CE018.h"

struct TWindowSubAreaMapDisp : public TUnk_804CE018 {
    virtual ~TWindowSubAreaMapDisp();
    u8 _pad1C[0x4];
    s16 m_20;
    u8 unk_22[0xA];
    s32 m_2c;
    u8 unk_30[0x2C];
    u32 m_5c;
    u8 unk_60[0x4];
    f32 m_64;
    u8 unk_68[0x4];
    u32 m_6c;
    u32 m_70;
    u32 m_74;
    void update_manual_scroll();
    virtual void render();
    virtual void run_task();
    void update_visibility();
};

typedef char TWindowSubAreaMapDisp_size[sizeof(TWindowSubAreaMapDisp) == 0x78 ? 1 : -1];
#endif
