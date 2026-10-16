#ifndef PSO_MISC_TWINDOWCTRLPLAYER_H
#define PSO_MISC_TWINDOWCTRLPLAYER_H

#include "types.h"
#include "pso/TObject.h"

struct TWindowCtrlPlayer : public TObject {
    virtual ~TWindowCtrlPlayer();
    u16 m_1c;
    u16 m_1e;
    u16 m_20;
    u8 _pad22[0x2];
    u32 m_24;
    u32 m_28;
    u32 m_2c;
    u32 m_30;
    u32 m_34;
    u32 m_38;
    u32 m_3c;
    static void render();
    void run_task();};

typedef char TWindowCtrlPlayer_size[sizeof(TWindowCtrlPlayer) == 0x40 ? 1 : -1];
#endif
