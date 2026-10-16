#ifndef PSO_MISC_TWINDOWSUBGAMEEND_H
#define PSO_MISC_TWINDOWSUBGAMEEND_H

#include "types.h"
#include "pso/TObject.h"

struct TWindowSubGameEnd : public TObject {
    virtual ~TWindowSubGameEnd();
    u32 m_1c;
    u32 m_20;
    u32 m_24;
    u32 m_28;
    virtual void render();
    virtual void run_task();};

typedef char TWindowSubGameEnd_size[sizeof(TWindowSubGameEnd) == 0x2C ? 1 : -1];
#endif
