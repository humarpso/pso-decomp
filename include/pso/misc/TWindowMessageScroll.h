#ifndef PSO_MISC_TWINDOWMESSAGESCROLL_H
#define PSO_MISC_TWINDOWMESSAGESCROLL_H

#include "types.h"
#include "pso/misc/TWindowMessageQuest.h"

struct TWindowMessageScroll : public TWindowMessageQuest {
    virtual ~TWindowMessageScroll();
    void run_task();
    u8 unk_94[0x4];
    s32 * m_98;
};

typedef char TWindowMessageScroll_size[sizeof(TWindowMessageScroll) == 0x9C ? 1 : -1];
#endif
