#ifndef PSO_MISC_TWINDOWCALLBACK_H
#define PSO_MISC_TWINDOWCALLBACK_H

#include "types.h"
#include "pso/misc/TUnk_804CE018.h"

struct TWindowCallBack : public TUnk_804CE018 {
    virtual ~TWindowCallBack();
    void render();
    void run_task();
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 unk_48[0x1C];
};

typedef char TWindowCallBack_size[sizeof(TWindowCallBack) == 0x64 ? 1 : -1];
#endif
