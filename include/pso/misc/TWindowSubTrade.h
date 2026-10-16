#ifndef PSO_MISC_TWINDOWSUBTRADE_H
#define PSO_MISC_TWINDOWSUBTRADE_H

#include "types.h"
#include "pso/TObject.h"

struct TWindowSubTrade : public TObject {
    virtual ~TWindowSubTrade();
    u8 m_1c;
    u8 _pad1D[0x3];
    u32 m_20;
    u32 m_24;
    u32 m_28;
    u32 m_2c;
    u32 m_30;
    u32 m_34;
    static void render();
    void run_task();};

typedef char TWindowSubTrade_size[sizeof(TWindowSubTrade) == 0x38 ? 1 : -1];
#endif
