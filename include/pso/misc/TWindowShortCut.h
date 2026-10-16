#ifndef PSO_MISC_TWINDOWSHORTCUT_H
#define PSO_MISC_TWINDOWSHORTCUT_H

#include "types.h"
#include "pso/misc/TUnk_804CE018.h"

struct TWindowShortCut : public TUnk_804CE018 {
    virtual ~TWindowShortCut();
    virtual void render();
    u8 _pad1C[0x4];
    s16 m_20;
    u8 _pad22[0x2];
    void* m_24;
    u8 _pad28[0x38];
    u32 m_60;
    u32 m_64;
    u32 m_68;
    u32 m_6c;
    u32 m_70;
    virtual void run_task();};

typedef char TWindowShortCut_size[sizeof(TWindowShortCut) == 0x74 ? 1 : -1];
#endif
