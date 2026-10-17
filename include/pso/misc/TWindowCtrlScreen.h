#ifndef PSO_MISC_TWINDOWCTRLSCREEN_H
#define PSO_MISC_TWINDOWCTRLSCREEN_H

#include "types.h"
#include "pso/TObject.h"

struct TWindowCtrlScreen : public TObject {
    virtual ~TWindowCtrlScreen();
    virtual void render();
};

typedef char TWindowCtrlScreen_size[sizeof(TWindowCtrlScreen) == 0x1C ? 1 : -1];
#endif
