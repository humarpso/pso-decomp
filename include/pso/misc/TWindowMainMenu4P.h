#ifndef PSO_MISC_TWINDOWMAINMENU4P_H
#define PSO_MISC_TWINDOWMAINMENU4P_H

#include "types.h"
#include "pso/misc/TWindowMainMenu.h"

struct TWindowMainMenu4P : public TWindowMainMenu {
    virtual ~TWindowMainMenu4P();
    virtual void vfunc_8();
    virtual void vfunc_9();
    void render();
    void run_task();
    u8 unk_44[0x1C];
};

typedef char TWindowMainMenu4P_size[sizeof(TWindowMainMenu4P) == 0x60 ? 1 : -1];
#endif
